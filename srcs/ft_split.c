/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:11:55 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 16:38:47 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	counter;
	int		inside;

	counter = 0;
	inside = 0;
	while (*s)
	{
		if (*s != c && !inside)
		{
			inside = 1;
			counter++;
		}
		else if (*s == c)
			inside = 0;
		s++;
	}
	return (counter);
}

static char	*ft_get_next_word(char const **s, char c)
{
	char const	*word_start;
	size_t		word_len;

	word_start = *s;
	word_len = 0;
	while (**s && **s != c)
	{
		(*s)++;
		word_len++;
	}
	return (ft_substr(word_start, 0, word_len));
}

static void	*ft_free_split(char **split, size_t count)
{
	while (count--)
		free(split[count]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	res = ft_calloc(word_count + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[i] = ft_get_next_word(&s, c);
			if (!res[i])
				return (ft_free_split(res, i));
			i++;
		}
	}
	return (res);
}

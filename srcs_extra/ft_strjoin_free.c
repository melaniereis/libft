/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:46:16 by meferraz          #+#    #+#             */
/*   Updated: 2024/12/19 10:54:50 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	size_t	i;
	size_t	size_s1;
	size_t	size_s2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	p = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!p)
		return (NULL);
	i = -1;
	while (++i < size_s1)
		p[i] = s1[i];
	i = 0;
	while (i < size_s2)
	{
		p[size_s1 + i] = s2[i];
		i++;
	}
	p[size_s1 + i] = '\0';
	if (s1)
		free((void *)s1);
	return (p);
}

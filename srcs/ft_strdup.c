/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:16:25 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/24 09:19:53 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	int		i;
	int		size;

	size = ft_strlen(src);
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

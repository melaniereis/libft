/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:01:16 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/23 11:29:58 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (n == 0)
		return (NULL);
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(p + i) == (unsigned char)c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}

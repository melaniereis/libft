/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:03:42 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/18 15:34:45 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = src;
	d = dest;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}

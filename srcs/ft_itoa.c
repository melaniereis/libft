/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:11:40 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/24 14:11:44 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static long	absolute(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static size_t	count_size(long n)
{
	size_t		counter;
	long		nb;

	nb = absolute(n);
	counter = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

static char	*ft_itoa_pos(long n)
{
	size_t		size;
	char		*p;

	size = count_size(n);
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	p[size] = '\0';
	while (size > 0)
	{
		p[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (p);
}

static char	*ft_itoa_neg(long n)
{
	char	*p;
	size_t	size;

	size = count_size(n);
	p = malloc(sizeof(char) * (size + 2));
	if (!p)
		return (NULL);
	p[0] = '-';
	p[size + 1] = '\0';
	while (size > 0)
	{
		p[size--] = n % 10 + '0';
		n = n / 10;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	long	nb;

	nb = n;
	if (n < 0)
		return (ft_itoa_neg(-nb));
	else
		return (ft_itoa_pos(nb));
}

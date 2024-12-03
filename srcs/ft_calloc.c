/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:24:05 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 17:29:43 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t num_element, size_t element_size)
{
	void	*ptr;
	size_t	total_size;

	total_size = num_element * element_size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, total_size));
}

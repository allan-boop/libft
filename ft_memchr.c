/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:19:13 by ahans             #+#    #+#             */
/*   Updated: 2023/10/20 14:54:42 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	const unsigned char	*src;
	unsigned char		target;
	size_t				i;

	i = 0;
	src = memoryBlock;
	target = (unsigned char)searchedChar;
	while (i < size)
	{
		if (src[i] == target)
		{
			return ((void *)&src[i]);
		}
		i++;
	}
	return (NULL);
}
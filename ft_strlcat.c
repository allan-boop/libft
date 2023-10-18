/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:03:06 by ahans             #+#    #+#             */
/*   Updated: 2023/10/18 17:44:42 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	free_space;

	dst_len = 0;
	src_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
	{
		dst_len++;
	}
	free_space = size > dst_len ? size - dst_len : 0;
	while (src[src_len] != '\0' && free_space > 1)
	{
		dst[dst_len] = src[src_len];
		dst_len++;
		src_len++;
		free_space--;
	}
	if (dst_len < size)
	{
		dst[dst_len] = '\0';
	}
	return (dst_len + src_len);
}

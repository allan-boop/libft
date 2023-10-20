/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:12:56 by ahans             #+#    #+#             */
/*   Updated: 2023/10/20 17:55:53 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*to_find;
	size_t		i;
	size_t		j;
	size_t		count;

	i = 0;
	to_find = (NULL);
	if (big == NULL || len == 0)
    	return NULL;
	if (*little == '\0')
    	return (char *)big;
	while (i < len )
	{
		if (big[i] == little[0])
		{
			to_find = &big[i];
			j = 0;
			count = 0;
			while (i + j < len && big[i + j] == little[j])
			{
				count++;
				j++;
				if (little[j] == '\0')
					return ((char *)to_find);
			}
			i += count;
		}
		else
			i++;
	}
	return (NULL);
}

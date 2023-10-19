/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:31:09 by ahans             #+#    #+#             */
/*   Updated: 2023/10/19 11:45:52 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	long long	i;

	i = ft_strlen(string) - 1;
	while (i >= 0)
	{
		if (string[i] == (char)searchedChar)
			return ((char *)(string + i));
		i--;
	}
	return (NULL);
}

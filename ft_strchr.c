/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:23:44 by ahans             #+#    #+#             */
/*   Updated: 2023/10/19 17:51:02 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string != '\0')
	{
		if (*string == searchedChar)
			return ((char *)string);
		string++;
	}
	if (searchedChar == '\0')
		return ((char *)string);
	return (NULL);
}

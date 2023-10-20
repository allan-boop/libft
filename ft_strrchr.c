/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:31:09 by ahans             #+#    #+#             */
/*   Updated: 2023/10/20 13:12:09 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	const char	*derniere_occurrence;

	derniere_occurrence = NULL;
	while (*string != '\0')
	{
		if (*string == (char)searchedChar)
			derniere_occurrence = (char *)string;
		string++;
	}
	if ((char)searchedChar == '\0')
		return ((char *)string);
	return ((char *)derniere_occurrence);
}

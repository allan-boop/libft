/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:05:20 by ahans             #+#    #+#             */
/*   Updated: 2023/10/21 15:30:42 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *theString)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*theString == ' ' || (*theString >= 9 && *theString <= 13))
		theString++;
	if (*theString == '-')
	{
		sign = -1;
		theString++;
	}
	else if (*theString == '+')
		theString++;
	while (*theString >= '0' && *theString <= '9')
	{
		result = result * 10 + (*theString - '0');
		theString++;
	}
	return (sign * result);
}

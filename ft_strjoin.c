/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:12:19 by ahans             #+#    #+#             */
/*   Updated: 2023/10/22 17:25:58 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	j = ft_strlen(s2);
	i = ft_strlen(s1);
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, i);
	ft_strlcpy(str + i, s2, j);
	str[i + j] = '\0';
	return (str);
}

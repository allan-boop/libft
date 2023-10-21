/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:00:47 by ahans             #+#    #+#             */
/*   Updated: 2023/10/21 16:36:28 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	source_len;
	char	*duplicate;

	if (source == NULL)
		return (NULL);
	source_len = ft_strlen(source);
	duplicate = (char *)malloc(source_len + 1);
	if (duplicate == NULL)
		return (NULL);
	ft_strlcpy(duplicate, source, source_len + 1);
	return (duplicate);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:09:43 by ahans             #+#    #+#             */
/*   Updated: 2023/10/20 14:09:39 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stddef.h> 

void 	*ft_memchr( const void *memoryBlock, int searchedChar, size_t size );
int		ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strrchr(const char *string, int searchedChar);
char	*ft_strchr(const char *string, int searchedChar);
int		ft_tolower(int character);
int		ft_toupper(int character);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memmove( void *destination, const void *source, size_t size );
void	*ft_memcpy( void *destination, const void *source, size_t size );
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *theString);
void	*ft_memset( void *pointer, int value, size_t count);
int		ft_isprint(int charac);
int		ft_isdigit(int charac);
int		ft_isascii(int c);
int		ft_isalpha(int charac);
int		ft_isalnum(int charac);

#endif
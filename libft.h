/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <allan.hans68350@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:09:43 by ahans             #+#    #+#             */
/*   Updated: 2023/10/24 17:47:01 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *source);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_atoi(const char *theString);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
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
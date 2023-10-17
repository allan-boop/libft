#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stddef.h> 

void * ft_memmove( void * destination, const void * source, size_t size );
void * ft_memcpy( void * destination, const void * source, size_t size );
void ft_bzero(void *s, size_t n);
size_t strlen(const char * theString);
void * ft_memset( void * pointer, int value, size_t count);
int ft_isprint(int charac);
int ft_isdigit(int charac);
int ft_isascii(int c);
int ft_isalpha(int charac);
int ft_isalnum(int charac);

#endif
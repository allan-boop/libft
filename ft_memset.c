#include <stdio.h>
#include <string.h>
#include <stddef.h> 

void * ft_memset( void * pointer, int value, size_t count)
{
	char * str;
	str = pointer;

	while(count)
	{
		*str = value;
		str++;
		count--;
	}
	return pointer;
}

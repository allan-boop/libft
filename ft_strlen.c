#include <stdio.h>
#include <string.h>
#include <stddef.h> 

size_t ft_strlen(const char * theString)
{
	unsigned int i = 0;
	while (theString[i] != '\0')
	{
		i++;
	}
	return i;
}

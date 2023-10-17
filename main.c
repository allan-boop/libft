#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h> 

int main ()
{
	char dest[5];
    char src[5];
	int i = 0;
    while(i < 5)
    {
        src[i] = i;
        i++;
    }
    i = 0;
    ft_memcpy(dest, src, 5);
	while (i < 5)
	{
		printf("%d ", (int)((char *)dest)[i]);
		i++;
	}
	return 0;
}

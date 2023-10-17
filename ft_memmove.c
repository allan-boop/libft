#include <stddef.h>

void * ft_memmove( void * destination, const void * source, size_t size )
{
    char tmp[size];
    char *dest = (char *)destination;
    char *src = (char *)source;
    size_t i = 0;

    while (i < size)
    {
        tmp[i] = src[i];
        i++;
    }
    i = 0;
    while (size)
    {
        dest[i] = tmp[i];
        size--;
        i++;
    }
    return destination;
}

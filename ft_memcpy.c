#include <strings.h>
void * ft_memcpy( void * destination, const void * source, size_t size )
{
    char *dest = (char *)destination;
    const char *src = (const char *)source;
    int i = 0;
    while (size)
    {
        dest[i] = src[i];
        size--;
        i++;
    }
    return destination;
}
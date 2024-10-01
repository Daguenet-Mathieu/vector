#include "vector.h"

void	ft_memcpy(void *src, void *dest, size_t size)
{
    size_t  i;
    char    *src_ptr;
    char    *dest_ptr;

    src_ptr = src;
    dest_ptr = dest;
    i = 0;
    while (i < size)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
}
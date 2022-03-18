#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  j; //Because of comparison  to n
    const char *sPtr;

    j = 0;
    sPtr = (const char *)s;// can only iterate over a char array not a void 

    while (j < n)
    {
        if (sPtr[j] == c) // can only iterate over a char array not a void
        {
            return ((void *)s + j); // return from original pointer value and also since return value is void
        }
        ++j;
    }
    
    return (0);
}
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t j;
    j = 0;
    char *dstPtr;
    const char *srcPtr;

    if (!dst)
    {
        return (0);
    }

    if (n == 0 || !src || dst == src)
    {
        return dst;
    }
    else
    {
        dstPtr = (char *)dst;
        srcPtr = (const char *)src;
        while (dstPtr[j] && srcPtr[j] && j < n)
        {
            dstPtr[j] = srcPtr[j];
            ++j;
        }
        return dst;
    }
}
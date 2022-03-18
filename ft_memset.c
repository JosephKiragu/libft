#include "libft.h"

void    *ft_memset(void *s1, int c, size_t len)
{
    size_t j;
    char *sPtr;

    j = 0;
    sPtr = (char *)s1;

    while (sPtr[j])
        ++j;

    if (len == 0)
        return (s1);
    else if (c == '\0')
    {
        *sPtr = '\0'; //Use the char pointer to assign
        return s1;
    } 
    else if (len > j)
    {
        return (0);
    }
    else 
    {
        j = 0;
        while (sPtr[j] && j < len && c > 0)
        {
            sPtr[j] = c;
            ++j;
        }
        return (s1);       
    }   

}
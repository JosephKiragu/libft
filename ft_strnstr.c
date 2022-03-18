//TEST THIS CODE ONCE MORE

#include "libft.h"

char    *ft_strnstr(char *s1, char *s2, size_t len)
{
    size_t j;
    size_t i;
    size_t s2_len;
    //char *cPtr;
    
    
    j = 0;
    s2_len = 0;
    while (s2[s2_len]){++s2_len;} // add stlen function

    if (!*s2)
        return s1;

    while (s1[j] && len > 0 && j < len)
    {
        i = 0;
        while (s1[j + i] && s2[i] && s1[j + i] == s2[i] && (j + i) < len)
        {
          ++i;
        }
            if (i == s2_len)
                return (char *)s1 + j;
        ++j;
    }
    
    return NULL;
}


#include "libft.h"

int     ft_strncmp(char *s1, char *s2, size_t n)
{
    unsigned int j;

    j = 0;
    while(s1[j] && s2[j] && n > 0 && j < n)
    {
        if(s1[j] != s2[j])
        {
            return (s1[j] - s2[j]);
        }
        ++j;
    }
    
    return (0);
}
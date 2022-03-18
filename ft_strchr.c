#include "libft.h"
char    *ft_strchr(char *str, int c)
{
  int j;
    
    j = 0;
    while (str[j])
    {
        if (str[j] == c)
        {
            return((char *)str + j);
        }
        j++;
    }
    if (str[j] == c)
    {
        return ((char *)str + j);
    }
    
    *str = '\0';
    
    return(str);
}
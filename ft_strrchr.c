#include "libft.h"

char    *ft_strrchr(char *str, int c)
{
    int j;

    j = 0;

    while (str[j])
    {
        j++;
    }
    while (j > 0)
    {
        if (str[j] == c)
        {
            return((char *)str + j);
        }
        j--;
    }

    j = 0;

    *str = '\0';
    return (str);
}

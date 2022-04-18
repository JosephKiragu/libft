#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    size_t  i;

    if (!(str = ft_strdup(s))) //strdup creates a new string with malloc and copies contents of s into it
        return (NULL);
    i = 0;
    while (str[i])
    {
        str[i] = (*f)(i, str[i]); //applies function f into every character of str
        i++;
    }
    return (str); 
}
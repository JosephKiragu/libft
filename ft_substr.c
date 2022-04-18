#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dest;
    unsigned int i;
    unsigned int stop;

    i = start;
    stop = start + len;

    dest = (char *)malloc((len + 1) * sizeof(char));


    while (i < stop && *(s + i) != '\0' )
    {
        *dest = *(s + i);
        i++;
        dest++;
    }
    *dest = '\0';
    return dest - len;  // returning the pointer to original position
}
#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *s1Ptr;
    size_t len;
    size_t j;//Introduce memcopy and do away with this variable

    len = 1;
    j = 0;
    while(s1[len])
        {++len;} // USE STRLEN

    if(!s1)
        return (NULL);
        
    s1Ptr = malloc(sizeof(char) * len);
    if(!s1Ptr)
        return (NULL);
        
    while (s1[j])
    {
        s1Ptr[j] =  s1[j];
         ++j;
    }
        s1Ptr[j] = '\0';
        return s1Ptr;
    
}
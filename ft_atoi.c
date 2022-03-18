#include "libft.h"

int     ft_atoi(const char *str)
{
    int j;
    int sign;
    int nbr;

    j = 0;
    sign = 1;
    nbr = 0;

    while (str[j] == '\t' || str[j] == '\n' || str[j] == '\v' ||
           str[j] == '\f' || str[j] == '\r' || str[j] == ' ')
           {
               ++j;
           }
    
    if (str[j] == '-')
    {
        sign = -1;
    }

    if (str[j] == '-' || str[j] == '+')
    {
        ++j;
    }
    while(str[j] && (str[j] >= '0' && str[j] <= '9'))
    {
        nbr = (nbr * 10 ) + (str[j] - '0');
        ++j;
    }
    return (nbr * sign);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:47:12 by jkiragu           #+#    #+#             */
/*   Updated: 2022/05/11 14:47:16 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int  ft_abs(int num)
{
    return ((num < 0) ? -num : num);
}

static void     ft_strrev(char *str)
{
    size_t len;
    size_t i;
    size_t temp;

    len = ft_strlen(str);
    i = 0;
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    }
    
}

char *ft_itoa(int n)
{
    char *str;
    int is_neg;
    size_t len;

    is_neg = (n < 0); //boolen assigns 1 if True and 0 if False

    if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
        return (NULL);
    if (n == 0)
        str[0] = '0';
    len = 0;
    while (n != 0)
    {
        str[len++] = '0' + ft_abs(n % 10); // extract last value from int
        n = (n / 10); //move to the next value before last
    }
    if (is_neg)
        str[len] = '-'; //assign negative sign if int value was negative
    ft_strrev(str); //reverses string as it is created in reverse
    return (str);
}

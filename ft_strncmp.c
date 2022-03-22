/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:31:24 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:31:34 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *sPtr1;
    unsigned char *sPtr2;
    size_t j;

    sPtr1 = (unsigned char *)s1;
    sPtr2 = (unsigned char *)s2;    

    j = 0;

    while(sPtr1[j] && sPtr1[j] && n > 0 && j < n)
    {
        if(sPtr1[j] != sPtr2[j])
        {
            printf("The value at pointer is %c\n", *((unsigned char *)s1 + j));
            // return sPtr1[j] - sPtr2[j];
            return (*((unsigned char *)s1 + j)    - *((unsigned char *)s2 +j));
        }
        ++j;
    }
    
    return (0);
}

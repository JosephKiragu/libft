/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:13:35 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:13:44 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char *s1Ptr;
    unsigned const char *s2Ptr;

    size_t j; 

    j = 0;
    s1Ptr = (unsigned const char *)s1;
    s2Ptr = (unsigned const char *)s2;


    while (j < n)
    {
        if (s1Ptr[j] != s2Ptr[j])
        {
            return s1Ptr[j] - s2Ptr[j];
        }   
        ++j;  
    }

    return(0);
}

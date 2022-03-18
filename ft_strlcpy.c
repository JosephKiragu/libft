/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:28:59 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:29:06 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, char *src, size_t cpy_len)
{
    size_t j;

    j = 0;

    if (cpy_len > 0)
    {
        while (src && j <= (cpy_len - 1))
        {
            dst[j] = src[j];
            j++;     
        }
        dst[j] = '\0' ;
    }

    j = 0 ;

    while(src[j] != '\0')
    {
        j++ ;
    }

    return (j);

}

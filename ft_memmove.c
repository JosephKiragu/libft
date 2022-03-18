/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:14:20 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:14:26 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dstPtr;
    const char *srcPtr;

    dstPtr = (char *)dst;
    srcPtr = (const char *)src;

    if (!dst)
    { 
        return(0);
    }

    if (!src || dst == src || len == 0)
    {
        return dst;
    }

    if (dstPtr > srcPtr) //does not overwrite
    {
        while (len--)// decrease after so that i can use the first value
        {
            *(dstPtr + len) = *(srcPtr + len); //using * because of pointer arithmetic
        }
        return dst;
    }
    else 
    {
        while(len--) //overwrites
        {
            *dstPtr++ = *srcPtr++; //using pointers to not use int J remember to remove it in final code
        }
        return dst;
    }

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:12:49 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:12:57 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i ;

    i = 0;

    while (i < n)
    {
        *((char *)(dst) + i) = (*(const char *)(src) + i);
        i++;
    }

    return dst;

}
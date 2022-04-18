/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:21:29 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/22 22:17:32 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s1, int c, size_t len)
{
    unsigned char *sPtr;

    sPtr = (unsigned char *)s1;

    while(len--)
    {
        *sPtr++ = c;
    }

    return s1;

}

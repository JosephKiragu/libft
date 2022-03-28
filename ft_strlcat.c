/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:26:16 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:28:31 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, char *src, size_t cat_len)
{
    size_t j;
    size_t i;
    size_t dest_len;
    size_t src_len;

    j = 0;
    i = 0;
    printf("String src = %s\n",  src);
    printf("String dst before = %s\n", dest);

    while (dest[j] != '\0')
    {
        j++;
    }
    dest_len = j;
    while (src[i] != '\0')
    {
        i++;
    }
    src_len = i;

    i = 0;

    if((cat_len + 1) <= dest_len)
    {
        return (cat_len + src_len);
    }
    else
    {
        while (src[i] && cat_len - 1 > (dest_len + i) - 1)
        {
            dest[j] = src[i];
            j++;
            i++;
        }
        dest[j] = '\0';
    }
    printf("String dst after = %s\n", dest);
    return (dest_len + src_len);
}
// I NEED TO ADD STRLEN FUNCTION TO REDUCE SIZE AND TEST THIS FUNCTION
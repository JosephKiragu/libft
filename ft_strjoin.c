/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:46:03 by jkiragu           #+#    #+#             */
/*   Updated: 2022/05/11 14:46:09 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len ;
    char *dest;

    len = ft_strlen(s1) + ft_strlen(s2);
    dest = (char *)malloc((len + 1) * sizeof(char));

    while (*(s1))
    {
        *dest++ = *s1++;
    }
    while (*s2)
    {
        *dest++ = *s2++;
    }
    *dest = '\0';

    return dest - len;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:01:52 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:49:00 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_bzero(void *s1, size_t n) // call memset as  function body!
{
    unsigned char *s1Ptr;
    size_t j;

    s1Ptr = (unsigned char *)s1;
    j = 0;

    if(!s1)
        return;

    while (j < n)
    {
       s1Ptr[j] = '\0'; //Use single quotes  to assign characters and Use double quotes  when assigning to the whole string array 
    }
    s1 = s1Ptr;
}

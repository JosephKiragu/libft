/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:11:11 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/18 16:47:13 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sptr;
	size_t		j;

	j = 0;
	sptr = (const char *)s;
	while (j < n)
	{
		if (sptr[j] == c)
		{
			return ((void *)s + j);
		}
		++j;
	}

	return (0);
}

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

int	t_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*sptr1;
	char	*sptr2;
	size_t	j;

	sptr1 = (char *)s1;
	sptr2 = (char *)s2;

	j = 0;

	while (j < n)
	{
		if (sptr1[j] != sptr2[j])
		{
			return (*((unsigned char *)s1 + j) - *((unsigned char *)s2 + j));
		}
		if (sptr1[j] == '\0' && sptr2[j] == '\0')
		{
			return (0);
		}
		++j;
	}
	return (0);
}
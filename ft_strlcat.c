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

size_t	ft_strlcat(char *dest, const char *src, size_t cat_len)
{
	size_t	j;
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	j = ft_strlen(dest);
	i = ft_strlen(src);
	dest_len = j;
	src_len = i;
	i = 0;
	if (cat_len == 0)
		return (src_len);
	if (dest_len == cat_len)
		return (dest_len + src_len);
	while (src[i] && (cat_len - (dest_len + i) - 1) > 0)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
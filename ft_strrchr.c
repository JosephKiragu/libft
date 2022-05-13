/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:35:37 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/22 23:27:11 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	while (j >= 0)
	{
		if (str[j] == c)
		{
			return ((char *)str + j);
		}
		j--;
	}
	return (NULL);
}

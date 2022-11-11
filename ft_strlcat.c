/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:47:59 by ibenaait          #+#    #+#             */
/*   Updated: 2022/10/23 15:00:36 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	int		i;

	if (size == 0)
		return (ft_strlen(src));
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size <= dstsize)
		return (srcsize + size);
	i = 0;
	if (size > dstsize + 1)
	{
		while (src[i] != '\0' && (dstsize + 1 + i) < size)
		{
			dst[dstsize + i] = src[i];
			i++;
		}
	}
	dst[i + dstsize] = '\0';
	return (dstsize + srcsize);
}

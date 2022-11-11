/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:17:58 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/01 20:58:55 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

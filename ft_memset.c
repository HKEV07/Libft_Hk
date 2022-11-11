/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:55:02 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/01 11:02:31 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *)str;
	i = 0;
	while (n)
	{
		b[i] = (unsigned char) c;
		i++;
		n--;
	}
	return (str);
}

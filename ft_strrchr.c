/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:22:04 by ibenaait          #+#    #+#             */
/*   Updated: 2022/10/14 12:26:49 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		n;

	n = ft_strlen(str);
	while (n >= 0)
	{
		if (str[n] == (char)c)
			return ((char *)str + n);
		n--;
	}
	return (0);
}

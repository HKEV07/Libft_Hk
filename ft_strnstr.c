/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: HK       <HK      @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:03:26 by HK                #+#    #+#             */
/*   Updated: 2022/10/27 10:24:53 by HK               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	if (size == 0)
		return (0);
	while (s1[i] && i < size)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] == s1[i + j] && j + i < size)
			{
				j++;
				if (!s2[j])
					return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (0);
}

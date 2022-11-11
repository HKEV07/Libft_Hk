/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:14:10 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/01 21:22:33 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if ((!s1 || !set))
		return (0);
	len = ft_strlen(s1);
	i = 0;
	while (*s1 != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, i, (len - i + 1)));
}

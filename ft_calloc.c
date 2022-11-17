/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: HK       <HK      @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:37:16 by HK                #+#    #+#             */
/*   Updated: 2022/11/03 16:13:59 by HK               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*str;
	size_t	m;

	m = n * s;
	if (s && (m / s) != n)
		return (0);
	str = malloc(m);
	if (str == NULL)
		return (str);
	ft_bzero(str, m);
	return (str);
}

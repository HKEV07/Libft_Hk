/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: HK       <HK      @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:21:22 by HK                #+#    #+#             */
/*   Updated: 2022/11/02 11:19:11 by HK               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	pl_m(const char *s, size_t j, int c)
{
	long	p;

	p = 0;
	while (s[j] >= '0' && s[j] <= '9')
	{
		p = (p * 10) + (s[j] - 48);
		if (p > 2147483647 && c == 1)
			return (-1);
		if (c == -1 && p > 2147483648)
			return (0);
		j++;
	}
	return (p);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		c;
	long	s;

	i = 0;
	c = 1;
	s = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' \
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c = -1;
		i++;
	}
	s = pl_m(str, i, c);
	return ((int)(s * c));
}

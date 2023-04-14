/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkev     <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:21:22 by hkev              #+#    #+#             */
/*   Updated: 2023/03/06 00:06:19 by hkev             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	pl_m(const char *s, size_t j)
{
	double		p;
	double		m;
	double		d;

	p = 0;
	m = 0;
	d = 1.0;
	while (s[j] >= '0' && s[j] <= '9')
	{
		m = (m * 10.0) + (s[j] - '0');
		j++;
	}
	if (s[j] == '.')
	{
		j++;
		while (s[j] >= '0' && s[j] <= '9')
		{
			p = (p * 10.0) + (s[j] - '0');
			d *= 10.0;
			j++;
		}
	}
	m += p / d;
	return (m);
}

double	ft_atof(const char *str)
{
	size_t		i;
	int			c;
	double		s;

	i = 0;
	c = 1;
	s = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' \
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c = -1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		ft_error(1);
	s = pl_m(str, i);
	if (-2.0 < (s * c) && (s * c) < 2.0)
		return (s * c);
	else
		ft_error(1);
	return (0.0);
}

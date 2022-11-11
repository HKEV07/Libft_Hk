/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:50:47 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/01 17:43:16 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	void	*clst;

	if (!lst || !f)
		return ;
	while (lst)
	{
		clst = lst->content;
		f(clst);
		lst = lst->next;
	}
}

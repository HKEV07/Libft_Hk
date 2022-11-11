/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:11:03 by ibenaait          #+#    #+#             */
/*   Updated: 2022/10/31 12:08:07 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nlst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nlst;
	}
}

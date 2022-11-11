/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:58:55 by ibenaait          #+#    #+#             */
/*   Updated: 2022/11/01 21:00:29 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		nlst = ft_lstnew(f(lst->content));
		if (!nlst)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, nlst);
		lst = lst->next;
	}
	return (head);
}

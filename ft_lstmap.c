/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:09:49 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/17 20:49:03 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_link;

	if (!lst || !f)
		return (NULL);
	new_link = (ft_lstnew((*f)(lst->content)));
	if (!new_link)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_list = new_link;
	lst = lst->next;
	while (lst)
	{
		new_link = ft_lstnew((*f)(lst->content));
		if (!new_link)
		{
			ft_lstclear(&new_list, del);
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_link);
		lst = lst->next;
	}
	return (new_list);
}


/*	t_list	*new;
	t_list	*temp1;
	t_list	*temp2;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew((f)(lst->content));
	temp1 = lst->next;
	temp2 = new;
	while (temp1)
	{
		temp2->next = ft_lstnew(temp1->content);
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	return (new);*/
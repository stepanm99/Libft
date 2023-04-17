/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:09:49 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/17 21:50:23 by smelicha         ###   ########.fr       */
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
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_link);
		lst = lst->next;
	}
	return (new_list);
}

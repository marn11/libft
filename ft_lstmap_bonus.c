/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:00:57 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/21 08:41:15 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nodes;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	nodes = NULL;
	temp = NULL;
	while (lst)
	{
		temp = ft_lstnew(NULL);
		if (!temp)
		{
			ft_lstclear(&nodes, del);
			return (NULL);
		}
		temp -> content = f(lst -> content);
		ft_lstadd_back(&nodes, temp);
		lst = lst -> next;
	}
	return (nodes);
}

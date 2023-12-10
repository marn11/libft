/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:04:42 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/14 01:10:31 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	int		i;
	t_list	*temp;
	t_list	*node;

	if (!lst || !del)
		return ;
	i = ft_lstsize(*lst);
	node = *lst;
	while (i > 0)
	{
		temp = node -> next;
		(*del)(node -> content);
		free(node);
		node = temp;
		i--;
	}
	*lst = NULL;
}

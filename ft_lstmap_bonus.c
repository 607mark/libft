/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:40:56 by mshabano          #+#    #+#             */
/*   Updated: 2024/05/03 15:20:07 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	t_list	*curr;

	if (!lst || !del || !f)
		return (NULL);
	newlst = NULL;
	curr = lst;
	while (curr)
	{
		tmp = (f(curr->content));
		if (!tmp)
		{
			ft_lstclear(&newlst, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmp);
		curr = curr->next;
	}
	return (newlst);
}

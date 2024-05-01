/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:02:46 by mshabano          #+#    #+#             */
/*   Updated: 2024/05/01 22:09:48 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list curr;
	curr = *lst;

	while (curr)
	{
		if (curr->next == NULL)
		{
			curr->next = new;
			new->next = NULL;
		}
			cur = curr->next;
	}
	return ;
}

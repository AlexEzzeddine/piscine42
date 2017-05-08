/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 19:42:10 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/19 23:37:12 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list		*new;
	t_list		*current;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	else if (cmp((*begin_list)->data, data) > 0)
	{
		current = *begin_list;
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = current;
		return ;
	}
	current = *begin_list;
	new = ft_create_elem(data);
	while (current->next && cmp(current->next->data, data) < 0)
		current = current->next;
	new->next = current->next;
	current->next = new;
}

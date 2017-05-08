/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 13:57:53 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/19 23:33:40 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	t_list	*last;
	t_list	*current;

	current = *begin_list;
	while (current->next)
	{
		if ((*cmp)(current->data, current->next->data) > 0)
		{
			if (current != *begin_list)
				last->next = current->next;
			else
				*begin_list = current->next;
			temp = current->next->next;
			current->next->next = current;
			current->next = temp;
			current = *begin_list;
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}

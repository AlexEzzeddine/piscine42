/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 18:51:06 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/19 23:28:14 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *node;
	t_list *previous;
	t_list *tmp;

	previous = 0;
	node = *begin_list;
	while (node)
	{
		tmp = node->next;
		node->next = previous;
		previous = node;
		node = tmp;
	}
	*begin_list = node;
}

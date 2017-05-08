/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:43:59 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/19 23:26:11 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list		*current;
	t_list		*tmp;

	current = *begin_list;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*begin_list = NULL;
}

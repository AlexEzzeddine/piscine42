/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:26:12 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/21 23:18:18 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	t_btree *res;

	res = 0;
	if (root)
	{
		res = btree_search_item(root->left, data_ref, cmpf);
		if (res)
			return (res);
		if (cmpf(root->item, data_ref) == 0)
			return (root);
		res = btree_search_item(root->right, data_ref, cmpf);
		if (res)
			return (res);
	}
	return (0);
}

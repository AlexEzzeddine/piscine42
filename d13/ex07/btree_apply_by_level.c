/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:40:39 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/21 23:05:02 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		g_level = 0;

int		btree_level_count(t_btree *root)
{
	int ldepth;
	int rdepth;

	if (root)
	{
		ldepth = btree_level_count(root->left);
		rdepth = btree_level_count(root->right);
		return ((ldepth > rdepth) ? ldepth + 1 : rdepth + 1);
	}
	return (0);
}

void	btree_apply_to_level(t_btree *root, int level, int is_first_elem,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (level == g_level)
		(*applyf)(root->item, level, is_first_elem);
	else
	{
		btree_apply_to_level(root->left, level + 1, is_first_elem, applyf);
		btree_apply_to_level(root->right, level + 1, 0, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
	int current_level, int is_first_elem))
{
	int		height;

	height = btree_level_count(root);
	while (g_level < height)
	{
		btree_apply_to_level(root, 0, 1, applyf);
		g_level++;
	}
}

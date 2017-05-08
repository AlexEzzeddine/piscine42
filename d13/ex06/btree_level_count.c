/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:28:10 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/21 17:45:49 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
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

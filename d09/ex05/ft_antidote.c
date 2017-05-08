/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:50:46 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/14 16:59:08 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	int	temp;

	if (i > j)
	{
		temp = i;
		i = j;
		j = temp;
	}
	if (i > k)
	{
		temp = i;
		i = k;
		k = temp;
	}
	if (j > k)
	{
		temp = j;
		j = k;
		k = temp;
	}
	return (j);
}

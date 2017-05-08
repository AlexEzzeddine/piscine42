/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:06:49 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/13 22:49:40 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min < max)
	{
		*range = (int*)malloc(sizeof(**range) * (max - min));
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (i);
	}
	*range = NULL;
	return (0);
}

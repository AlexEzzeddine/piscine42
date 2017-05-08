/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:12:06 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/12 19:26:53 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = NULL;
	if (min < max)
	{
		arr = (int*)malloc(sizeof(*arr) * (max - min));
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 20:48:01 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/18 22:24:09 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int *temp;

	arr = (int *)malloc(sizeof(int) * length);
	temp = arr;
	while (length--)
		*temp++ = f(*tab++);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 21:36:17 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/18 22:30:30 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int diff1;
	int diff2;

	i = 0;
	while (i < length - 2)
	{
		diff1 = f(tab[i], tab[i + 1]);
		diff2 = f(tab[i + 1], tab[i + 2]);
		if ((diff1 < 0) != (diff2 > 0))
			return (0);
		i++;
	}
	return (1);
}

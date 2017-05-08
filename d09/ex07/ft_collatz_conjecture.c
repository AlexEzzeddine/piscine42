/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:51:41 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/14 13:51:48 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	unsigned int count;

	count = 0;
	if (base % 2)
	{
		base *= 3;
		base++;
	}
	else
		base /= 2;
	if (base > 1)
		count = ft_collatz_conjecture(base);
	return (count + 1);
}

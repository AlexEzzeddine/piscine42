/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:17:25 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/14 17:03:03 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int				i;
	unsigned int	res;
	unsigned int	n;

	res = 0;
	i = 0;
	n = (unsigned int)value;
	while (i < 32)
	{
		res += n % 2;
		n /= 2;
		i++;
	}
	return (res);
}

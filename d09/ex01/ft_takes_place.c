/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:31:58 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/14 13:33:20 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*get_pm(int hour, char pm[5])
{
	if (hour >= 12 && hour < 24)
		pm = "P.M.";
	else
		pm = "A.M.";
	return (pm);
}

void	ft_takes_place(int hour)
{
	int		h12;
	int		h12_1;
	char	pm[5];

	h12 = hour > 12 ? hour - 12 : hour;
	h12_1 = hour + 1 > 12 ? hour - 11 : hour + 1;
	if (hour == 0)
		h12 = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 %s\n", h12, get_pm(hour, pm),
			h12_1, get_pm(hour + 1, pm));
}

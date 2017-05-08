/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 11:43:20 by ebitsch           #+#    #+#             */
/*   Updated: 2017/04/14 16:59:53 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str, 1);
		str++;
	}
}

int		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}

int		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

int		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	door->state = OPEN;
	return (TRUE);
}

int		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	door->state = OPEN;
	return (0);
}

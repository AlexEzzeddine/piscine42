/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 11:53:46 by ebitsch           #+#    #+#             */
/*   Updated: 2017/04/14 17:09:33 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define TRUE 1
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef struct	s_door
{
	int			state;
}				t_door;

int				is_door_open(t_door *door);
int				is_door_close(t_door *door);
int				open_door(t_door *door);
int				close_door(t_door *door);
void			ft_putstr(char *str);

#endif

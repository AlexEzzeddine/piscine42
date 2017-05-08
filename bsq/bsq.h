/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 08:45:24 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/26 02:03:07 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	s_point
{
	unsigned	short	size;
	int					x;
	int					y;
}				t_point;

typedef	struct	s_settings
{

	int		file;
	char	empty;
	char	obstacle;
	char	full;
	int		rows;
	int		cols;
	t_point	max;
}				t_settings;

t_settings		g_settings;

int				find(char *str, char c);
char			*ft_strcpy(char *dest, char *src);
int				fill_cell(unsigned short **arr, int row, int col, char c);

int				parse_settings();
int				readline(char *buf);
unsigned short	min(unsigned short a, unsigned short b, unsigned short c);
void			set_max(unsigned short size, int x, int y);
void			reset_settings();

#endif

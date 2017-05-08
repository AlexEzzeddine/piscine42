/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 00:29:05 by mtan              #+#    #+#             */
/*   Updated: 2017/04/26 00:29:05 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int				parse_settings(void)
{
	int		len;
	int		i;
	char	settings_str[15];

	len = readline(settings_str);
	if (len < 4 || len > 13)
		return (0);
	g_settings.full = settings_str[--len];
	g_settings.obstacle = settings_str[--len];
	g_settings.empty = settings_str[--len];
	i = 0;
	while (i < len)
	{
		if (settings_str[i] < '0' || settings_str[i] > '9')
			return (0);
		g_settings.rows = g_settings.rows * 10 + settings_str[i++] - '0';
	}
	return (g_settings.rows);
}

int				readline(char *buf)
{
	char	c;
	int		i;

	c = '\0';
	i = 0;
	while (c != '\n' && i < 14)
	{
		read(g_settings.file, &c, 1);
		buf[i++] = c;
	}
	buf[--i] = '\0';
	return (i);
}

void			set_max(unsigned short size, int x, int y)
{
	g_settings.max.size = size;
	g_settings.max.x = x;
	g_settings.max.y = y;
}

unsigned short	min(unsigned short a, unsigned short b, unsigned short c)
{
	unsigned short	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void			reset_settings(void)
{
	g_settings = (const t_settings){0, 0, 0, 0, 0, 0, {0, 0, 0}};
}

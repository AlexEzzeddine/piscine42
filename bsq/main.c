/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 17:38:29 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/26 03:43:48 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		solve(unsigned short **arr, char *str)
{
	int	row;
	int	col;

	row = 0;
	g_settings.cols = find(str, '\n');
	while (row < g_settings.rows)
	{
		arr[row] = malloc(sizeof(unsigned short) * g_settings.cols);
		col = 0;
		while (col < g_settings.cols)
		{
			if (!fill_cell(arr, row, col, *str))
				return (0);
			str++;
			col++;
		}
		if (*str != '\n')
			return (0);
		str++;
		row++;
	}
	if (*str)
		return (0);
	return (1);
}

char	*read_buf(void)
{
	char	*buf;
	char	*old_buf;
	size_t	buf_size;
	size_t	len;
	size_t	ret;

	len = 0;
	buf_size = 1;
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	while ((ret = read(g_settings.file, buf + len, buf_size)) > 0)
	{
		len += ret;
		if (buf_size < 536870912)
			buf_size *= 2;
		buf[len] = '\0';
		old_buf = buf;
		buf = (char *)malloc(sizeof(char) * (len + buf_size + 1));
		ft_strcpy(buf, old_buf);
		free(old_buf);
	}
	return (buf);
}

void	print_arr(unsigned short **arr)
{
	int row;
	int col;

	row = 0;
	while (row < g_settings.rows)
	{
		col = 0;
		while (col < g_settings.cols)
		{
			if (!arr[row][col])
				write(1, &g_settings.obstacle, 1);
			else if (row > g_settings.max.x - g_settings.max.size
					&& row <= g_settings.max.x
					&& col > g_settings.max.y - g_settings.max.size
					&& col <= g_settings.max.y)
				write(1, &g_settings.full, 1);
			else
				write(1, &g_settings.empty, 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int		bsq(char *filename)
{
	char			*str;
	unsigned short	**arr;

	reset_settings();
	if (filename)
		g_settings.file = open(filename, O_RDONLY);
	if (g_settings.file < 0 || !parse_settings())
		return (0);
	str = read_buf();
	arr = (unsigned short **)malloc(sizeof(unsigned short *) * g_settings.rows);
	if (!solve(arr, str))
		return (0);
	print_arr(arr);
	if (filename)
		close(g_settings.file);
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (!bsq(argv[i]))
				write(2, "map error\n", 10);
			i++;
			if (argc > 2 && i != argc)
				write(1, "\n", 1);
		}
	}
	else if (!bsq(0))
		write(2, "map error\n", 10);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 12:59:50 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/20 22:30:51 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define NBYTE 4096

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_error(int argc)
{
	char c;

	if (argc == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
		return (1);
	}
	return (0);
}

void	ft_bad_name(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	ft_folder_name(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
}

int		main(int argc, char **argv)
{
	int		f;
	int		i;
	int		ret;
	char	buf[NBYTE + 1];

	if (ft_error(argc))
		return (0);
	i = 1;
	while (i < argc)
	{
		f = open(argv[i], O_RDONLY);
		if (f < 0)
			ft_bad_name(argv[i]);
		else if (read(f, 0, 0) < 0)
			ft_folder_name(argv[i]);
		else
			while ((ret = read(f, buf, NBYTE)))
			{
				buf[ret] = '\0';
				write(1, buf, ret);
			}
		close(f);
		i++;
	}
	return (errno);
}

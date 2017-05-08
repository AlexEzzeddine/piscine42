/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:32:28 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/14 13:32:40 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

void	ft_generic(void)
{
	ft_putstr("Tut tut ; Tut tut\n");
}

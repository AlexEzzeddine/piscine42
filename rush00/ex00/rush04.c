/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 17:22:52 by wwalker           #+#    #+#             */
/*   Updated: 2017/04/09 17:34:52 by wwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_top(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	ft_putchar('B');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	ft_bot(int x)
{
	ft_putchar('C');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		return ;
	ft_top(x);
	while (y > 2)
	{
		ft_middle(x);
		y--;
	}
	if (y > 1)
		ft_bot(x);
}

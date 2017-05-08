/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 14:23:58 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/11 19:55:52 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int n)
{
	char *base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_putnbr(n / 16);
	ft_putchar(base[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putnbr(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

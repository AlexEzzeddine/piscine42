/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 14:18:26 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/11 23:40:50 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		length_if_valid(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 31)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	recursive_print(int n, char *base, int numeric_base)
{
	if (n == -2147483648)
	{
		recursive_print(n / numeric_base, base, numeric_base);
		ft_putchar(base[n % numeric_base] + 1);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n > numeric_base - 1)
			recursive_print(n / numeric_base, base, numeric_base);
		ft_putchar(base[n % numeric_base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int numeric_base;

	numeric_base = length_if_valid(base);
	if (!numeric_base)
		return ;
	recursive_print(nbr, base, numeric_base);
}

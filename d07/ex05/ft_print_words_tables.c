/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:26:01 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/13 22:53:30 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		while (**tab)
		{
			ft_putchar(**tab);
			(*tab)++;
		}
		ft_putchar('\n');
		tab++;
	}
}

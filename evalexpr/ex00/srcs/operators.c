/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:56:54 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/23 23:03:21 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include "evalexpr.h"

t_func	g_func[] = { ft_add, ft_sub, ft_div, ft_mul, ft_mod };

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

t_func	get_operator(char op)
{
	int i;

	i = -1;
	while (++i < 5)
		if (op == G_OPERATORS[i])
			return (g_func[i]);
	return (0);
}

int		priority(char op)
{
	if (op == '/' || op == '*' || op == '%')
		return (2);
	else if (op == '-' || op == '+')
		return (1);
	else
		return (0);
}

int		is_number(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 21:39:22 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/23 22:37:15 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	stack_init(t_stack *stack, int size)
{
	stack->top = -1;
	stack->data = malloc(sizeof(char *) * size);
}

void	stack_push(t_stack *stack, char *str)
{
	stack->data[++(stack->top)] = str;
}

char	*stack_top(t_stack *stack)
{
	if (stack->top >= 0)
		return (stack->data[stack->top]);
	else
		return (0);
}

char	*stack_pop(t_stack *stack)
{
	return (stack->data[stack->top--]);
}

void	stack_free(t_stack *stack)
{
	if (stack->data)
		free(stack->data);
}

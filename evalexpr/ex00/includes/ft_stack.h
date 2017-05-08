/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:47:52 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/23 23:40:46 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stdlib.h>

typedef struct	s_stack
{
	char		**data;
	int			top;
}				t_stack;

void			stack_init(t_stack *stack, int size);
void			stack_push(t_stack *stack, char *str);
char			*stack_top(t_stack *stack);
char			*stack_pop(t_stack *stack);
void			stack_free(t_stack *stack);

#endif

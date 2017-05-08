/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 19:06:13 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/23 23:04:02 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H

# include <stdlib.h>

typedef	int	(*t_func)(int x, int y);

int			ft_add(int x, int y);
int			ft_div(int x, int y);
int			ft_mod(int x, int y);
int			ft_mul(int x, int y);
int			ft_sub(int x, int y);

# define G_OPERATORS "+-/*%"

int			eval_expr(char *str);

int			is_digit(char c);

void		ft_putchar(char c);
void		ft_putnbr(int nb);
char		*ft_strncpy(char *src, unsigned int n);
char		*ft_itoa(int nbr);
int			ft_atoi(char *str);
int			ft_strlen(char *str);

t_func		get_operator(char op);
int			priority(char op);
void		evaluate(void);
int			is_number(char *str);
int			push_number(char *str);
void		fill_stacks(char *str);
void		eval_stacks(void);

#endif

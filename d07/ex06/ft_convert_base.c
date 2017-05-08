/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 23:05:44 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/13 23:41:41 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void    ft_init_result(int nb, int len_base, char **res)
{
    int tmp;
    int i;

    i = 0;
    tmp = nb;
    while (tmp)
    {
        tmp = tmp / len_base;
        i++;
    }
    *res = (char*)malloc(sizeof(char) * (i + 1));
}

int		ft_is_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i] != '\0')
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_get_base_size(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *res;
	int i=0;
	int n=0;
	int inlen;
	int from_size;
	inlen = ft_strlen(nbr);
	from_size = ft_get_base_size(base_from);
	while(i<inlen)
	{
		n+=ft_is_in_base(nbr[i], base_from) * ft_recursive_power(from_size , inlen-i-1);
		i++;
	}
	ft_init_result(n , ft_get_base_size(base_to), &res);
	return res;
}

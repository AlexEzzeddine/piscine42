/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 22:50:15 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/13 22:53:12 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		length;

	i = 1;
	length = 0;
	while (i < argc)
		length += (ft_strlen(argv[i++]) + 1);
	if (!length)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * (length));
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i != argc - 1)
			ft_strcat(str, "\n");
		i++;
	}
	str[length] = '\0';
	return (str);
}

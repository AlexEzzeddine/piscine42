/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 14:17:57 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/11 22:11:16 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_size;

	src_size = 0;
	while (src[src_size])
	{
		if (src_size + 1 < size)
		{
			*dest = src[src_size];
			dest++;
		}
		src_size++;
	}
	*dest = '\0';
	return (src_size);
}

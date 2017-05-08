/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 14:17:26 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/11 21:54:52 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_size;
	unsigned int dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0' && dest_size < size)
		dest_size++;
	src_size = 0;
	while (src[src_size])
	{
		if (src_size + dest_size + 1 < size)
			dest[dest_size + src_size] = src[src_size];
		src_size++;
	}
	dest[dest_size + src_size] = '\0';
	return (dest_size + src_size);
}

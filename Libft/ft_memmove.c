/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:09:41 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/17 22:09:41 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			index;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	index = 0;
	if (dest > source)
	{
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	else
	{
		while (index < len)
		{
			dest[index] = source[index];
			index++;
		}
	}
	return (dst);
}

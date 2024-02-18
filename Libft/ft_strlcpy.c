/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlencpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:37:01 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/17 22:37:01 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (index < size - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}

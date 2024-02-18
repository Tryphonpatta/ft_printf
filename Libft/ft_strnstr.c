/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:48:57 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/18 21:48:57 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_len;
	size_t	i;
	size_t	j;

	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (little_len == 0)
		return ((char *)big);
	if (big_len == 0 || len == 0 || len < little_len)
		return (NULL);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
			j++;
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

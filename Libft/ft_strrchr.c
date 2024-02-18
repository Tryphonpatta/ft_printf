/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:17:39 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/18 21:17:39 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == c)
			last = s;
		s++;
	}
	if (c == '\0')
		return (s);
	return (last);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:30:18 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/19 19:30:18 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	char	*temp;

	a = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	temp = a;
	if (!a)
		return (NULL);
	while (*s1)
	{
		*a = *s1;
		a++;
		s1++;
	}
	while (*s2)
	{
		*a = *s2;
		a++;
		s2++;
	}
	*a = '\0';
	return (temp);
}

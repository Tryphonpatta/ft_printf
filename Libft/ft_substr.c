/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:23:26 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/19 09:37:02 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *a;
    int index;

    a = malloc(sizeof(char) * (len + 1));
    index = 0;
    if (!s[start] || !a)
        return (NULL);
    while (s[start] && len)
    {
        a[index] = s[start];
        len--;
        index++;
        start++;
    }
    a[index] = '\0';
    return (a);
}
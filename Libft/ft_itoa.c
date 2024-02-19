/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:58:22 by ptantiam          #+#    #+#             */
/*   Updated: 2024/02/19 21:58:22 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countl(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	checksign(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

void	setminus(char *str, int sign)
{
	if (sign)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		tempn;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = countl(n);
	sign = checksign(&n);
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	tempn = n;
	if (!str)
		return (NULL);
	setminus(str, sign);
	len = len + sign - 1;
	while (len >= sign)
	{
		str[len--] = tempn % 10 + '0';
		tempn /= 10;
	}
	str[countl(n) + sign] = '\0';
	return (&str[0]);
}

// int main()
// {
// 	printf("%s\n",ft_itoa(-9));
// }

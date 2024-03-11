/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:49:09 by ptantiam          #+#    #+#             */
/*   Updated: 2024/03/12 00:49:09 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdarg.h>

int ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_printstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	return (index);
}

int ft_printform(va_list args, char c)
{
	if (c == 'c')
		return ft_printchar(va_arg(args, int));
	if (c == 's')
		return ft_printstr(va_arg(args, char *));
	if (c == '%')
		return ft_printchar('%');
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int index;
	int pl;
	va_start(args, str);

	index = 0;
	pl = 0;
	while (str[index])
	{
		if (str[index] == '%')
		{
			pl += ft_printform(args, str[index + 1]);
			index++;
		}
		else
		{
			write(1, &str[index], 1);
		}
		index++;
	}
}
int main()
{
	ft_printf("Hello %c %s", 'c', "world");
	return (0);
}
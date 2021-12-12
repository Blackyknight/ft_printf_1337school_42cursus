/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:29:12 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/12 14:57:50 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putconvertion(char arg, va_list list)
{
	if (arg == 'c')
		return (ft_printc(list));
	else if (arg == 's')
		return (ft_prints(list));
	else if (arg == 'p')
		return (ft_printp(list));
	else if (arg == 'd')
		return (ft_printiandd(list));
	else if (arg == 'i')
		return (ft_printiandd(list));
	else if (arg == 'u')
		return (ft_printu(list));
	else if (arg == '%')
		return (ft_printpc());
	else if (arg == 'x')
		return (ft_printxandx(arg, list));
	else if (arg == 'X')
		return (ft_printxandx(arg, list));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		c;
	int		c2;
	char	type;

	c = 0;
	c2 = 0;
	va_start(arg, str);
	while (str[c])
	{
		if (str[c] == '%')
		{
			type = str[c + 1];
			c2 = c2 + putconvertion(type, arg);
			c = c + 2;
		}
		else
		{
			ft_putchar(str[c]);
			c++;
			c2++;
		}
	}
	va_end(arg);
	return (c2);
}

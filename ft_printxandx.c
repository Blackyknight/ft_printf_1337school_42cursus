/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxandx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:30:37 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/10 17:12:01 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenghtofhexa(unsigned int nb, char *base)
{
	int	i;

	converter(nb, base);
	i = lenghtofhexa(nb);
	return (i);
}

int	ft_printxandx(char type, va_list arg)
{
	unsigned int	x;

	if (type == 'x')
	{
		x = va_arg(arg, int);
		return (ft_lenghtofhexa(x, "0123456789abcdef"));
	}
	else
	{
		x = va_arg(arg, int);
		return (ft_lenghtofhexa(x, "0123456789ABCDEF"));
	}
}

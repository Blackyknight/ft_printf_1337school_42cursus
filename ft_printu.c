/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:21:52 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/10 18:32:08 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb)
{
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
}

int	ft_printu(va_list arg)
{
	unsigned int	nb;
	int				i;

	i = 0;
	nb = va_arg(arg, unsigned int);
	ft_putunsigned(nb);
	i = lenghtofnb(nb);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printiandd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:07:25 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/10 18:32:37 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
}

int	lenghtofnb(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int	ft_printiandd(va_list arg)
{
	int	nb;
	int	i;

	i = 0;
	nb = va_arg(arg, int);
	ft_putnbr(nb);
	if (nb < 0)
	{
		i = i + lenghtofnb(nb);
		i++;
	}
	else
		i = lenghtofnb(nb);
	return (i);
}

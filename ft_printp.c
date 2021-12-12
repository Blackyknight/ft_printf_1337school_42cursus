/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:54:49 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/11 13:05:32 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	converter(unsigned long int nb, char *base)
{
	if (nb < 16)
		ft_putchar(base[nb % 16]);
	else
	{
		converter(nb / 16, base);
		converter(nb % 16, base);
	}
}

int	lenghtofhexa(unsigned long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

int	ft_printp(va_list arg)
{
	void				*p;
	unsigned long int	nb;
	int					i;

	p = va_arg(arg, void *);
	nb = (unsigned long int)p;
	write(1, "0x", 2);
	converter(nb, "0123456789abcdef");
	i = lenghtofhexa(nb);
	return (i + 2);
}

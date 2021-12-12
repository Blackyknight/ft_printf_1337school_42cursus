/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:29:34 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/10 18:32:27 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printc(va_list arg);
int		ft_prints(va_list arg);
int		ft_printp(va_list arg);
void	converter(unsigned long int nb, char *base);
void	ft_putchar(char c);
int		lenghtofhexa(unsigned long int nb);
int		ft_printiandd(va_list arg);
int		lenghtofnb(long int nb);
int		ft_printu(va_list arg);
void	ft_putunsigned(unsigned int nb);
int		ft_printpc(void);
int		ft_printxandx(char type, va_list list);
int		ft_lenghtofhexa(unsigned int nb, char *base);

#endif

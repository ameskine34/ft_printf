/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:48:55 by ameskine          #+#    #+#             */
/*   Updated: 2024/12/03 09:53:05 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_check_f(char c, va_list list);
int	ft_putstr(char *s);
int	ft_putchar(unsigned char c);
int	ft_addput(void *x);
int	ft_xxput(unsigned long nb);
int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_uput(unsigned int n);
int	ft_xput(unsigned int nb, int flag);

#endif

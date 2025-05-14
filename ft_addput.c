/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:35:39 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/30 10:33:01 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xxput(unsigned long nb)
{
	int		count;
	char	*p;

	count = 0;
	p = "0123456789abcdef";
	if (nb >= 16)
		count += ft_xxput(nb / 16);
	count += ft_putchar(p[nb % 16]);
	return (count);
}

int	ft_addput(void *x)
{
	int				count;
	unsigned long	nb;

	if (!x)
		return (ft_putstr("(nil)"));
	count = 0;
	nb = (unsigned long)x;
	count += ft_putstr("0x");
	count += ft_xxput(nb);
	return (count);
}

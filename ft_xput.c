/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xput.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:48 by ameskine          #+#    #+#             */
/*   Updated: 2024/12/03 09:53:27 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xput(unsigned int nb, int flag)
{
	char	*p;
	int		count;

	count = 0;
	if (!flag)
		p = "0123456789abcdef";
	else
		p = "0123456789ABCDEF";
	if (nb >= 16)
		count += ft_xput(nb / 16, flag);
	count += ft_putchar(p[nb % 16]);
	return (count);
}

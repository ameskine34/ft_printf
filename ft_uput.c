/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uput.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:06:18 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/30 10:31:34 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uput(unsigned int n)
{
	unsigned long	nb;
	int				count;

	count = 0;
	nb = n;
	if (nb <= 9)
	{
		count += ft_putchar(nb + 48);
		return (count);
	}
	if (nb > 9)
		count += ft_uput(nb / 10);
	count += ft_putchar((nb % 10) + 48);
	return (count);
}

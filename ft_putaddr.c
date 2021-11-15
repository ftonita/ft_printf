/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftonita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:50:48 by ftonita           #+#    #+#             */
/*   Updated: 2021/11/15 21:50:49 by ftonita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexaddr(size_t k)
{
	int	c;

	c = 0;
	if (k >= 16)
		c += ft_puthexaddr(k / 16);
	if (k % 16 < 16 && k % 16 > 9)
	{
		c += ft_putchar('a' + (k % 16) - 10);
	}
	else if (k % 16 < 10 && k % 16 >= 0)
		c += ft_putchar(k % 16 + '0');
	return (c);
}

size_t	ft_putaddr(void *n)
{
	int		c;
	size_t	k;

	c = 0;
	c += write(1, "0x", 2);
	k = (size_t) n;
	if (k >= 16)
		c += ft_puthexaddr(k / 16);
	if (k % 16 < 16 && k % 16 > 9)
	{
		c += ft_putchar('a' + (k % 16) - 10);
	}
	else if (k % 16 < 10 && k % 16 >= 0)
		c += ft_putchar(k % 16 + '0');
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftonita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:51:19 by ftonita           #+#    #+#             */
/*   Updated: 2021/11/15 21:51:20 by ftonita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int n)
{
	size_t	c;

	c = 0;
	if (n == -2147483648)
	{
		c += ft_putchar('-');
		c += ft_putchar('2');
		c += ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		c += ft_putchar('-');
		c += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		c += ft_putnbr(n / 10);
		c += ft_putnbr(n % 10);
	}
	else
		c += ft_putchar(n + '0');
	return (c);
}

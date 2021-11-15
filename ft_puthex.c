/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftonita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:51:07 by ftonita           #+#    #+#             */
/*   Updated: 2021/11/15 21:51:08 by ftonita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex(unsigned int n, int type)
{
	int	c;

	c = 0;
	if (n >= 16)
		c += ft_puthex(n / 16, type);
	if (n % 16 < 16 && n % 16 > 9)
	{
		if (type == 0)
			c += ft_putchar('a' + (n % 16) - 10);
		else if (type == 1)
			c += ft_putchar('A' + (n % 16) - 10);
	}
	else if (n % 16 < 10 && n % 16 >= 0)
		c += ft_putchar(n % 16 + '0');
	return (c);
}

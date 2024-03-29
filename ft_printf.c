/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftonita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:50:36 by ftonita           #+#    #+#             */
/*   Updated: 2021/11/15 21:50:38 by ftonita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_arg(char s, va_list ar)
{
	int	c;

	c = 0;
	if (s == 'd')
		c += ft_putnbr(va_arg(ar, int));
	else if (s == 's')
		c += ft_putstr(va_arg(ar, char *));
	else if (s == 'c')
		c += ft_putchar(va_arg(ar, int));
	else if (s == 'i')
		c += ft_putnbr(va_arg(ar, int));
	else if (s == 'u')
		c += ft_putui(va_arg(ar, unsigned int));
	else if (s == 'p')
		c += ft_putaddr(va_arg(ar, void *));
	else if (s == 'X')
		c += ft_puthex(va_arg(ar, int), 1);
	else if (s == 'x')
		c += ft_puthex(va_arg(ar, int), 0);
	else if (s == '%')
		c += ft_putchar('%');
	else
		return (0);
	return (c);
}

int	ft_printf(const char *s, ...)
{
	va_list	ar;
	size_t	c;
	int		i;

	va_start(ar, s);
	i = 0;
	c = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			c += ft_print_arg(s[i + 1], ar);
			i++;
		}
		else
			c += write(1, &s[i], 1);
		i++;
	}
	va_end(ar);
	return (c);
}

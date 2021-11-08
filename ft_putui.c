#include "ft_printf.h"

size_t	ft_putui(long int n)
{
	size_t	c;

	c = 0;
	if (n > 9)
	{
		c += ft_putui(n / 10);
		c += ft_putui(n % 10);
	}
	else
		c += ft_putchar(n + '0');
	return (c);
}

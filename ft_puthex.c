#include "ft_printf.h"

size_t	ft_puthex(size_t n, int type)
{
	int c;

	c = 0;
	if (n < 16 && n > 9)
	{
		if (type == 0)
		{
			c += ft_putchar('a' + (n % 10));
		}
		else if (type == 1)
		{
			c += ft_putchar('A' + (n % 10));
		}
	}
	else if (n < 9)
		ft_putchar(n + 48);
	c = c / 16;
	return (c);
}

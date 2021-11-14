#include "ft_printf.h"

size_t	ft_puthex(size_t n, int type)
{
	int c;

	c = 0;
	if (n < 16 && n > 9)
	{
		if (type == 0)
		{
			c += ft_putchar('A');
		}
		else if (type == 1)
		{

		}
	}
	else if (n < 9)
		ft_putchar(n + 48);
	return (c);
}

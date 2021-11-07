#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	size_t	k;

	k = 0;
	k += write(1, &c, 1);
	return (k);
}

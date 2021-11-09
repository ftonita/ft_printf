#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	size_t	c;

	c = 0;
	if (!s)
	{
		c += ft_putstr("(null)");
		return (c);
	}
	while (*s)
	{
		c += write(1, s, 1);
		s++;
	}
	return (c);
}

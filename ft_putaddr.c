#include "ft_printf.h"
#include <stdio.h>

size_t	ft_putaddr(void *n)
{
	int	c;

	c = ft_putstr((char *)&n);
	return (c);
}
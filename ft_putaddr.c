#include "ft_printf.h"
#include <stdio.h>

size_t	ft_putaddr(void *n)
{
	int	c;

	c = printf("\n[%zx]\n", (size_t)n);
	return (c);
}

int main(void)
{
	char s;

	s = 0;
	printf("p: %p\n", &s);
	ft_putaddr(&s);
	return 0;
}
#include "ft_printf.h"
#include <stdio.h>

char	*ft_strstr(const char *in, const char *str)
{
    char c;
    size_t len;

    c = *str++;
    if (!c)
        return (char *) in;

    len = ft_strlen(str);
    while (ft_strncmp(in, str, len) != 0)
	{
        char sc;

		sc = 0;
        while (sc != c)
		{
            sc = *in++;
            if (!sc)
                return (char *) 0;
        } 
    } 

    return (char *) (in - 1);
}

int	ft_ar_count(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return i;
}

int	ft_printf(const char *s, ...)
{
	va_list	ar;
	int		c;
	va_start(ar, s);
	int	i;

	i = 0;
	while (s[i])
    {
		c = va_arg(ar, int) + '0';
		printf("arg: %c\n", c);
		i++;
	}
    va_end(ar);
	return 0;
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_printf("qwerty", 1, 2, 3, 4, 5);
	return 0;
}
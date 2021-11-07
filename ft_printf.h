#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_putnbr(int n);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_puthex(int n, int  type);
size_t	ft_putui(int n);
size_t	ft_putaddr(int n);

#endif
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_putnbr(int n);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_puthex(size_t n, int  type);
size_t	ft_putui(unsigned int n);
size_t	ft_putaddr(void *n);

#endif
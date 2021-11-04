#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *in, const char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_puthex(int n);


#endif
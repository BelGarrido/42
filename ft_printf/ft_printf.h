#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stddef.h> // size_t
# include <stdlib.h> // malloc
# include <unistd.h> // write
# include <fcntl.h>  // flags open
# include <stdio.h> // printf
#include <stdarg.h> // va_list

//print %c (char)
void	ft_putchar_print(char c, int *count);
//print %s (string)
void	ft_putstr_print(char *s, int *count);
//print %i and %d (int)
void	ft_putnbr_print(int n, int *count);
//print %u (unsigned int)
void	ft_putuint_print(unsigned int n, int *count);
//print %p (pointers)
void	ft_putptr_print(void *, int *count);
//ft_printf
int		ft_printf(const char *format, ...);

#endif
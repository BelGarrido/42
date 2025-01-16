/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:01:57 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/15 15:01:57 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h> // size_t
# include <stdlib.h> // malloc
# include <unistd.h> // write
# include <fcntl.h>  // flags open
# include <stdio.h> // printf
# include <stdarg.h> // va_list
# include <stdint.h>

//print %c (char)
void	ft_putchar_print(char c, int *count);
//print %s (string)
void	ft_putstr_print(char *s, int *count);
//print %i and %d (int)
void	ft_putnbr_print(int n, int *count);
//print %u (unsigned int)
void	ft_putuint_print(unsigned int n, int *count);
//print %p (pointers)
void	ft_putptr_print(void *ptr, int *count);
//print %x (hexadecimal)
void	ft_puthexlow_print(unsigned int x, int *count);
//print %X (hexadecimal)
void	ft_puthexup_print(unsigned int x, int *count);
//ft_printf
int		ft_printf(const char *format, ...);

#endif
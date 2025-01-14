/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:44:40 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/14 14:42:39 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_print_format(va_list args, const char *str, int *count)
{
	if (*str == 's')
	{
		ft_putstr_print(va_arg(args, char*), count);
	}
	else if (*str == 'i' || *str == 'd')
	{
		ft_putnbr_print(va_arg(args, int), count);
	}
	else if (*str == 'u')
	{
		ft_putuint_print(va_arg(args, unsigned int), count);
	}
	else if (*str == 'x' || *str == 'X')
	{
		ft_puthexlow_print(va_arg(args, unsigned int), count);
	}
	else if (*str == 'X')
	{
		ft_puthexupper_print(va_arg(args, unsigned int), count);
	}
	else if (*str == 'c')
	{
		ft_putchar_print(va_arg(args, int), count);
	}
	else if (*str == 'p')
	{
		//ft_putptr_print(va_arg(args, void *), count);
	}
	
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	
	int i = 0;
	int count = 0;
	while (format[i] != '\0')
	{	
		if (format[i] == '%')
		{
			//check what type of element is the format[i + 1]
			i++;
			if (format[i] == '%')
				ft_putchar_print('%', &count);
			else 
				ft_print_format(args, &format[i], &count);
		}
		else
		{
			ft_putchar_print(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return count;
}
 
int main()
{	
	char *text = "mundo";
	int number = 1234;
	int count = ft_printf("hola %s estamos en %X\n", text, number);
	int count2 = printf("hola %s estamos en %X\n", text, number);
	ft_printf("count: %i\n", count);
	ft_printf("count2: %i\n", count2);
	//int result = printf("Sentence to know how many %s\n", "characters were written");
    //printf("%d characters were written", result);
}
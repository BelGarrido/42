/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:44:40 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/15 13:52:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_format(va_list args, const char *str, int *count)
{
	if (*str == 's')
		ft_putstr_print(va_arg(args, char *), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_print(va_arg(args, int), count);
	else if (*str == 'u')
		ft_putuint_print(va_arg(args, unsigned int), count);
	else if (*str == 'x')
		ft_puthexlow_print(va_arg(args, unsigned int), count);
	else if (*str == 'X')
		ft_puthexup_print(va_arg(args, unsigned int), count);
	else if (*str == 'c')
		ft_putchar_print(va_arg(args, int), count);
	else if (*str == 'p')
		ft_putptr_print(va_arg(args, void *), count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ft_putchar_print('%', &count);
			else
				ft_print_format(args, &format[i], &count);
		}
		else
			ft_putchar_print(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}

/* int main()
{	
	char *text = "mundo";
	int number = 2025;
	int count = ft_printf("hola %x estamos en %p\n", number, text);
	int count2 = printf("hola %x estamos en %p\n", number, text);
	ft_printf("count: %i\n", count);
	ft_printf("count2: %i\n", count2);
	printf("\n");
	//int count3 = printf(" NULL %s NULL ", NULL);
	//printf("\n");
	int count4 = ft_printf("%p %p", 0, 0);
	printf("\n");
	//ft_printf("count3: %i\n", count3);
	ft_printf("count4: %i\n", count4);
	    //printf("%d characters were written", result);
} */
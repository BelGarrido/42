/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:44:40 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/09 15:56:30 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/* 
1 - The printf function will write each character of the intial string, until it finds a %.

2 - When it finds a %, it will look at the element in the next index/position.
 			2.1 It will find the character that will define the type of the first variable argument.
			2.2 Depending on what it finds, it will call a method that will display the argument of the particular type at output.
			-> if there is a "s" after the %, then you will need a function that displays strings.
			-> if there is a "d" after the %, then you will need a function that displays numbers.
			etc. 
3 - Once the first variable argument has been written, you go back to step 1, until the string is finished (aka, until you find a null character (\0)).

	ft_print debe devolver el numero de caracteres que se ha impreso y número negativo si ha habido algún error
	i need a INDEX to count the position it's being printed
	i need a COUNT to count how many caracteres are printed in total
*/

void ft_format(va_list args, char *str, int *count)
{
	if (str == 's')
	{
		ft_putstr();
	}
	else if (str == 'i')
	{
		ft_putnbr();
	}
	else if (str == 'u')
	{
		ft_putunbr();
	}
	else if (str == 'x' || str == 'X')
	{
		ft_puthex();
	}
	else if (str == 'c')
	{
		ft_putchar();
	}
	else if (str == 'p')
	{
		ft_putptr();
	}
	
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	char *string = va_arg (args, char *); /*"Ana"*/
	
	int i = 0;
	int count = 0;
	while (format[i] != '\0') /*no estoy segura de necesitar esta linea*/
	{
		while(format[i] != '%' && format[i] != '\0')
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
		}
		if (format[i] == '%')
		{
			//check what type of element is the format[i + 1]
			printf("%i", i);
			if (format[i + 1] == 's')
			{
				//print string;
			}
			else if (format[i + 1] == 'i')
			{
				//print int;
			}	
		}
	}
	return count;
}

int main()
{	
	char *text = "hola mundo";
    ft_printf("hola %s");
	//int result = printf("Sentence to know how many %s\n", "characters were written");
    //printf("%d characters were written", result);
}
#include "ft_printf.h"

//no se comporta igual que el original, pero funciona

void	ft_putuint_print(int n, int *count)
{
	char	char_num;
	int		num;

	num = 0;
	//tengo que ver que hacer con esta parte
	if (n == -2147483648)
	{
		write (1, "2147483648", 11);
		(*count)++;
		return ;
	}
	//y con esta
	if (n < 0)
	{
		n = -n;
	}
	if (n < 10)
	{
		char_num = n + 48;
		write (1, &char_num, 1);
		(*count)++;
		return ;
	}
	num = n % 10;
	n = n / 10;
	char_num = num + 48;
	ft_putuint_print(n, count);
	(*count)++;
	write (1, &char_num, 1);
}

/* int	main(void)
{
	int	number;
	number = -1256563;
	int count = 0;
	ft_putuint_print(number, &count);
	printf ("\n");
	printf ("%d", count);
	printf ("\n");
} */
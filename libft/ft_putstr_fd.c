#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s)
{	
	int i = 0;
	while (s[i] != '\0')
	{
		write (1, &s, 1);
		i++;
	}
}

int	main(void)
{	
	char *string = "hola";
	int fd = open("./prueba.txt", O_WRONLY);
	ft_putstr_fd(string);
}
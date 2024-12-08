#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd);

void ft_putendl_fd(char *s, int fd)
{
	int i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	ft_putchar_fd ('\n', fd);
}

int	main(void)
{	
	char *string = "holi ruben";
	int fd = open("./prueba.txt", O_WRONLY);
	ft_putendl_fd(string, fd);
}
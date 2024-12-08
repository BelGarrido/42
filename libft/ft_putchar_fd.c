#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

int	main(void)
{	
	int fd = open("prueba.txt", O_RDWR);
	ft_putchar_fd('B', fd);
}
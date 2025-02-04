/* #include "get_next_line.h"

int main(void)
{
	int fd;
	char * line;

	fd = open("./prueba.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s\n", line),
		free(line);
		get_next_line(fd);
	}
	close(fd);
	return (0);
} */
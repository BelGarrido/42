#include <unistd.h>

void	aff_y(char *s)
{	
	if (*s)
	{
		write (1, "y", 1);
		write (1, "\n", 1);
	}
}

int	main(void)
{
	char *string;
	string = "hola";
	
	aff_y(string);
	return 0;
}	

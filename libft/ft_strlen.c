#include "libft.h"
unsigned int ft_strlen(const char *s)
{	
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return len;
}

/*int main ()
{
	char *string = "hola";
	printf("%i\n", ft_strlen(string));
}*/
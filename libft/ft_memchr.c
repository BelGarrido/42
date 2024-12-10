#include <stdio.h>
//#include <string.h> 

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*string = (const char *)s;

	while (n > 0)
	{
		if (*string == c)
		{
			return ((char *)string);
		}
		n--;
		string++;
	}
	return (NULL);
}

int	main(void)
{   
	const char *s = "halo";
	int c = 'a';

	printf("%p\n", ft_memchr(s, c, 4));
	//printf("%p", memchr(s, c, 4));
}

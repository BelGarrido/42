#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memcpy(void *dest_str, const void * src_str, unsigned int n)
{
    unsigned int	i;
    unsigned char *dest = (unsigned char *)dest_str;
    unsigned char *src = (unsigned char *)src_str;
	i = 0;	
	if (n > 0)
	{
		while (i < (n))
		{
			dest[i] = src[i];
			i++;
		}
	}
    return dest_str;
}

int	main(void)
{
	char	string1[] = "hola, que tal?";
	char	*string2 = (char *)malloc(strlen(string1)*sizeof(char));
	int	size;

	size = 8;
	ft_memcpy(string2, string1, size);
	printf("original: %s\n", string1);
	printf("copia: %s\n", string2);
	return (0);
}
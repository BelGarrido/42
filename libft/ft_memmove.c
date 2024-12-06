#include <stdio.h>

void *ft_memmove(void *dest, const void *src, unsigned int count)
{
	int i = 0;
	char *d = (char *)dest;
	const char *s = (const char *)src;
	if (s + count > d)
	{ 	
		i = count - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}	
	}
	else 
	{
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}	
	}
	return (dest);
}

int main ()
{
	char dest[21] = "a shiny white sphere";
	char *src = dest + 2;
	ft_memmove(dest + 8, src, 11);
	printf("%s\n", dest);
}
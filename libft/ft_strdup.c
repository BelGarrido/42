#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlen(const char *s);

char *ft_strdup(const char *s)
 {	
	int i;
	
	char * str_cpy = (char *)malloc(ft_strlen(s)*sizeof(char) + 1);
	if (str_cpy == NULL)
	{
        return NULL;
        }
	i = 0;
	while (s[i] != '\0')
	{
		str_cpy[i] = s[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

int main(void)
{
	const char *string = "hola";
	char *new_string = ft_strdup(string);
	printf("%s\n", new_string);
}

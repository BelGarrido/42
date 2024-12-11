#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	int i;
	int j;
	
	if (!result)
		return NULL;
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

int main(void)
{
	char *s1 = "hola";
	char *s2 = "mundo";
	char *result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}

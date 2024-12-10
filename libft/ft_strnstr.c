#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while ((to_find[j] != '\0') && (str[i + j] == to_find[j]))
		{
			j++;
			if (i + j > n)
				return ('\0');
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return ('\0');
}

int main()
{
    char str1[] = "Australopitecus";
    char to_find1[] = "casa";
    char *result1 = ft_strnstr(str1, to_find1, 20);
    printf("ft_strnstr(str1, to_find1) = %s\n", result1);
    return (0); 
}

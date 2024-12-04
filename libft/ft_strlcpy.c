//#include <stdio.h>
//#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[length] != '\0')
	{
		length ++;
	}
	return (length);
}

/*unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}*/

/*int	main(void)
{
	char	string1[] = "hola, que tal?";
	char	*string2 = (char *)malloc(ft_strlen(string1)*sizeof(char));
	int	size;

	size = 8;
	ft_strlcpy(string2, string1, size);
	printf("original: %s\n", string1);
	printf("copia: %s\n", string2);
	return (0);
}*/

/*int main() {
    char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
    
    // Test 1
    printf("%u-", ft_strlcpy(test, "asdf", 16));
    printf("%s\n", test);
    
    // Test 2
    printf("%u-", ft_strlcpy(test, "uiop", 0));
    printf("%s\n", test);
    
    // Test 3
    printf("%u-", ft_strlcpy(test, "qwerty", 4));
    printf("%s\n", test);
    
    // Test 4
    printf("%u-", ft_strlcpy(test, "", 4));
    printf("%s\n", test);

    return 0;
}*/

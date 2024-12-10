#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int s_length = ft_strlen(s);
	char *sub_s = (char *)malloc((len + 1) *sizeof(char));
	int i = 0;
	
	if (!sub_s)
		return NULL;
	if (start >= s_length)
	{
		char *empty_str = (char *)malloc(1*sizeof(char));
		if (!empty_str)
			return NULL;
		empty_str[0] = '\0';
		return (empty_str);
	}
	if (start + len > s_length)
		len = s_length - start;
	while (len > 0)
	{
		sub_s[i] = s[start + i]; 	
		i++;
		len--;
	}
	sub_s[i] = '\0';	
	return (sub_s);
}

int	main(void)
{
	char *s = "hello world";
	printf("%s\n", ft_substr(s,10,5));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:30:13 by anagarri          #+#    #+#             */
/*   Updated: 2024/11/11 12:30:16 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_index;
	unsigned int	length;

	src_index = 0;
	length = 0;
	if (size > 0)
	{
		while (src[src_index] != '\0' && src_index < (size -1))
		{
			dest[src_index] = src[src_index];
			src_index++;
		}
		dest[src_index] = '\0';
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:47:28 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:47:28 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while ((to_find[j] != '\0') && (str[i + j] == to_find[j]))
		{
			j++;
			if (i + j > n)
				return (NULL);
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

/*int main()
{
    char str1[] = "Australopitecus";
    char to_find1[] = "x";
    char *result1 = ft_strnstr(str1, to_find1, 20);
    printf("ft_strnstr(str1, to_find1) = %s\n", result1);
    return (0); 
}*/
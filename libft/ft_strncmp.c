/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:54:20 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 17:54:23 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;
	unsigned char *str1;
	unsigned char *str2;
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' && str2[i] != '\0' && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i < n)
	{
		return (str1[i] - str2[i]);
	}
	return (0);
}

/*int main (){

    char s1[] = "hola Anita";
    char s2[] = "hola Znita";
    printf("%i\n",  ft_strncmp (s1, s2));
    printf("%i\n",  strncmp (s1, s2));
    return 0;
}*/

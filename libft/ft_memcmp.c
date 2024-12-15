/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:42:43 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/05 15:42:46 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int		i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}

/*int main ()
{
    char s1[] = "hola mundo";
    char s2[] = "hola Mundo";
	int prueba = memcmp("t\200", "t\0", 2);
    printf("%i\n",  ft_memcmp ("t\200", "t\0", 2));
    printf("%i\n", prueba);
    return 0;
}*/

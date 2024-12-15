/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:47:13 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:47:13 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		s++;
		i++;
	}
}

/*void
iter(unsigned int i, char * s)
{
	*s += i;
}

void	to_uppercase(unsigned int i, char *c)
{	
    if (c[i] >= 'a' && c[i] <= 'z')
        c[i] = c[i] - 32;       
}

void	to_lowercase(unsigned int i, char *c)
{	
    if (c[i] >= 'A' && c[i] <= 'Z')
        c[i] = c[i] + 32;       
}

int	main()
{	
	unsigned int i;

	i = 0;
	char s[] = "0000000000";
	char s2[] = "MICHI MICHI";
	ft_striteri(s, iter);
	//ft_striteri(s2, to_lowercase);
	printf("%s\n", s);
	printf("%s\n", s2);
}*/
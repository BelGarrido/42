/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:47:23 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:47:23 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlen(const char *s);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	int i;

	i = 0;
	char	*mods = (char *)malloc(ft_strlen(s)* sizeof(char) + 1);
	if (!mods)
		return NULL;
	while (s[i] != '\0')
	{
		mods[i] = f(i, s[i]);
		i++;
	}
	mods[i] = '\0';
	return (mods);
}

char to_uppercase(unsigned int i, char c)
{	
    if (c >= 'a' && c <= 'z')
        c = c - 32;
	return c;    
}

int main()
{
	char s[] = "michi michi";
	printf("%s\n", s);
	printf("%s\n", ft_strmapi(s, to_uppercase));
}

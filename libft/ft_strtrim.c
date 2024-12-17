/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:23:15 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/17 13:56:48 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*scpy;
	char	*result;

	len = ft_strlen(s1) - 1;
	scpy = ft_strdup(s1);
	j = 0;
	if (!scpy)
	{
		return (NULL);
	}
	while (len >= 0)
	{
		if (set[j] == s1[len])
		{
			len--;
			j = 0;
		}
		else if (set[j] == '\0')
		{
			scpy[len + 1] = '\0';
			break ;
		}
		else
			j++;
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (set[j] == scpy[i])
		{
			i++;
			j = 0;
		}
		else if (set[j] == '\0')
			break ;
		else
			j++;
	}
	result = ft_strdup (scpy + i);
	free(scpy);
	return (result);
}
/* static int ft_is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
} */

/*int	main(void)
{
	char	*string = "*43*.hola..*";
	char	*set = "43*.5";
	char	*newstring = ft_strtrim(string, set);
	printf("%s\n", newstring);
}*/
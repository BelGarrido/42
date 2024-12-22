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

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void	trimback(int len, const char *s1, const char *set, char *scpy)
{
	while (len >= 0)
	{
		if (!is_in_set(s1[len], set))
		{
			scpy[len + 1] = '\0';
			break ;
		}
		len--;
	}
}

static int	trimfront(const char *s1, const char *set, char *scpy)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!is_in_set(scpy[i], set))
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	char	*scpy;
	char	*result;

	scpy = ft_strdup(s1);
	if (!scpy)
		return (NULL);
	trimback((ft_strlen(s1)-1), s1, set, scpy);
	i = trimfront(s1, set, scpy);
	result = ft_strdup (scpy + i);
	free(scpy);
	return (result);
}

/*int	main(void)
{
	char	*string = "*43*.hola..*";
	char	*set = "43*.5";
	char	*newstring = ft_strtrim(string, set);
	printf("%s\n", newstring);
}*/
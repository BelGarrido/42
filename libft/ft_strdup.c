/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:47:05 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/13 14:47:05 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str_cpy;

	str_cpy = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (str_cpy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		str_cpy[i] = s[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

/*int main(void)
{
	const char *string = "hola";
	char *new_string = ft_strdup(string);
	printf("%s\n", new_string);
}*/

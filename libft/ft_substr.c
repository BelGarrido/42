/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:47:32 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/14 13:34:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		s_length;
	char				*sub_s;
	int					i;

	s_length = ft_strlen(s);
	sub_s = (char *) malloc ((len + 1) * sizeof(char));
	i = 0;
	if (!sub_s)
		return (NULL);
	if (start >= s_length)
		return ("\0");
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

/*int	main(void)
{
	char *s = "hello world";
	printf("%s\n", ft_substr(s,15,5));
}*/

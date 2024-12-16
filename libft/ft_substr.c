/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:47:32 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/16 18:25:52 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	s_length;
	char			*sub_s;
	size_t			i;

	s_length = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > s_length)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub_s = ft_calloc(len + 1, sizeof(char));
	if (!sub_s)
		return (NULL);
	while (len > i)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	return (sub_s);
}
/*int	main(void)
{
	char *s = "hello world";
	printf("%s\n", ft_substr(s,15,5));
}*/

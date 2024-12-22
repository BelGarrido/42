/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:59:56 by anagarri          #+#    #+#             */
/*   Updated: 2024/12/20 18:15:46 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (*s != '\0')
	{
		if (*s != c && index == 0)
		{
			count++;
			index = 1;
		}
		if (*s == c)
			index = 0;
		s++;
	}
	return (count);
}

static char	*fill_word(const char *s, char c, int *j)
{
	char			*word;
	unsigned int	start;
	size_t			len;

	while (s[*j] == c && s[*j] != '\0')
		(*j)++;
	start = *j;
	while (s[*j] != '\0' && s[*j] != c)
		(*j)++;
	len = (*j) - start;
	word = ft_substr(s, start, len);
	return (word);
}

static void	ft_free(char **result, int i)
{
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(const char *s, char c)
{
	char	**word_string;
	int		i;
	int		wordscount;
	int		j;

	i = 0;
	j = 0;
	wordscount = word_count(s, c);
	word_string = ft_calloc((wordscount + 1), sizeof(char *));
	if (!word_string)
		return (NULL);
	while (wordscount > 0)
	{
		word_string[i] = fill_word(s, c, &j);
		wordscount--;
		if (!word_string[i])
		{
			ft_free(word_string, i);
			return (NULL);
		}
		i++;
	}
	return (word_string);
}

/*int main() {
    const char *str = "\t\t\t\thello!\t\t\t\t";
    char c = '\t';
	char **result = ft_split(str, c);
	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/
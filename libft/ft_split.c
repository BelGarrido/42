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

static int word_count(const char *s, char c) // find and return the number of words in the string
{
	int count;
	int index;
	
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
/*static int word_count(const char *s, char c)
{
	int count = 1;
	while (*s != '\0')
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}*/

static char *fill_word(const char *s, char c, int *j) /*EN PRINCIPIO PARECE QUE ESTO NO ES*/
{
	char 			*word;
	unsigned int	start; /*(el indice donde tiene que empezar a copiar)*/
	//unsigned int	end;
	size_t 			len; /*la longitud de la palabra (start - end)*/
	// printf("init fill_word\n");
	while (s[*j] == c && s[*j] != '\0')
        (*j)++;
	start = *j;

	// printf("j: %i s[*j]: %c\n", *j, s[*j]);
	while (s[*j] != '\0' && s[*j] != c)
		(*j)++;
	//end = *j;

	// printf("j2: %i\n", *j);
	//(*j)++;

	// printf("j3: %i\n", *j);

	len = (*j) - start;
	word = ft_substr(s, start, len);
	return (word);
	
	/*ft_substr*/
	/*aloja la memoria para cada palabra*/
	/*copiar la palabra*/
	/*return la palabra*/
}

static void ft_free(char **result, int i)
{
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char **ft_split(const char *s, char c)
{
	char	**word_string;
	int 	i;
	int		wordscount;
	int 	j;
	i = 0;
	j = 0;
	// printf("string s: %s\n", s);
	wordscount = word_count(s, c);
	word_string = ft_calloc((wordscount + 1), sizeof(char *));
	if (!word_string)
		return (NULL);
	// printf("antes del bucle wordscount\n");
	while (wordscount > 0)
	{
		word_string[i] = fill_word(s, c, &j);
		wordscount--;
		// printf("i: %i wordcount: %i\n", i, wordscount);
		if (!word_string[i])
		{
			ft_free(word_string, i);
			return NULL;
		}
		i++;
	}
	// printf("FIN SPLIT FUNC\n");

		/*fin de palabra*/
			/*copiar la palabra en el word_string*/
			/*----> fill_word()*/
			/*----> ft_free()*/
	/*return(word_string)*/
	return(word_string);
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
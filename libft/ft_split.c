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

char **ft_split(const char *s, char c)
{
	char	**word_string;
	int 	i;
	int		words_count;
	
	words_count = word_count(s, c);
	word_string = calloc((words_count + 1), sizeof(char *)); /*porque se utiliza sizeof(char *), si ese tamaño no lo conocemos*/
	word_string[words_count] = NULL; /*¿tiene esto sentido?*/
	/*recorro el strin - inicio de palabra*/
	
	while (s[i] > word_count)
	{	
		if (word_count)
		{
			word_string[i] = static_fill_word(s, c, i);
		}
		words_count--;
	}
	
		/*fin de palagra*/
			/*copiar la palabra en el word_string*/
			/*----> fill_word()*/
			/*----> ft_free()*/
	/*return(word_string)*/
}

int static_word_count(const char *s, char c) /* find and return the number of words in the string */
{
	int count;
	int index;
	
	count = 0;
	index = 0;
	while (*s != '\0')
	{	
		if (s != c && index == 0)
		{
			count++;
			index = 1;
		}
		if (*s == c)
		{
			index = 0;
		}
		s++;
	}
	return (count);
}

void static_ft_free()
{
	
}

char *static_fill_word(const char *s, char c, int i)
{
	char 			*word;
	unsigned int	start; /*(el indice donde tiene que empezar a copiar)*/
	unsigned int	end;
	size_t 			len; /*la longitud de la palabra (start - finish)*/
	unsigned int	i;
	start = 0;
	end = 0;
	i = 0;
	while (s[i] != '\0')
	{	
		start = i;
		if (s[i] != c)
			i++;
		if (s[i] == c)
			end = start + i;
		i++;
	}
	word = ft_substr(s, start, end);
	return (word);
	/*ft_substr*/
	/*aloja la memoria para cada palabra*/
	/*copiar la palabra*/
	/*return la palabra*/
	
}
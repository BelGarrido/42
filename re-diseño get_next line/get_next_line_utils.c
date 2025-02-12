/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:00:11 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/17 11:00:11 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//copy_from_buffer lee el file, copia el contenido del buffer en la lista enlazada y devuelve la lista


//leer datos con read()

int	found_new_line(t_list *list);

t_list	*find_last_node(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void	print_list(t_list *list){
	t_list *a = list;
	printf("list content: [");
	while(a != NULL){
		printf("%s, ", a -> content);
		a = a -> next;
	}
	printf("]\n");
}

void	write_str(t_list *list, char *line)
{
	int i;
	int	j;

	if (list == NULL)
		return (0);
	j = 0;
	while(list != NULL)
	{
		i = 0;
		while(list -> content[i]!= '\0')
		{
			if(list -> content[i] == '\n')
			{
				line[j] = '\n';
				j++;
				line[j] = '\0';
				return ;
			}
			line[j] = list -> content[i];
			i++;
			j++;
		}
		list = list -> next;
	}
	line[j] = '\0';
	return ;
}

int	len_to_newline(t_list *list)
{
	int i;
	int	len;

	if (list == NULL)
		return (0);

	while(list != NULL)
	{
		i = 0;
		while(list ->content[i]!= '\0')
		{
			if(list -> content[i] == '\n')
			{
				len++;
				return (len);
			}
			i++;
			len++;
		}
		list = list -> next;
	}
	return (len);
}

void	dealloc()
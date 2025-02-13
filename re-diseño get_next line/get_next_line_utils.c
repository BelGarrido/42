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

int	found_new_line(t_list *list)
{
	int i;

	i = 0;

	if(list == NULL)
		return (0);

	while(list -> content[i] != '\0')
	{
		printf("--> found_new_line: check-point #1\n");
		if (list -> content[i] == '\n')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

t_list	*find_last_node(t_list *lst)
{
	printf("--> find_last_node: check-point #1\n");
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	printf("--> find_last_node: check-point #2\n");
	return (lst);
}

void	print_list(t_list *list)
{
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
		return ;
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

void	dealloc(t_list **list, t_list *newnode, char *buffer) /*no entiendo los dobles punteros de las t_list*/
{
	t_list	*temp;

	if (*list == NULL)
		return ;
	while(*list)
	{
		printf("--> dealloc: check-point #1\n");
		
		temp = (*list)->next;
		printf("--> dealloc: check-point #2\n");
		free((*list)->content);
		printf("--> dealloc: check-point #3\n");
		free(*list);
		(*list) = temp;
	}
	printf("--> dealloc: check-point #2\n");
	*list = NULL;
	if (newnode ->content[0] != '\0')
	{
		*list = newnode;
		// free(buffer); aqui no puedo liberar el buffer porque newnode->content esta apuntando al buffer right?
	}
	else
	{
		free(buffer);
		free(newnode);
	}
}
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

t_list * copy_from_buffer(t_list *list, int fd)
{
	printf("()COPY_FROM_BUFFER #1\n");
	char *buffer;
	int	i;

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
		return (NULL);

	int bytes_read;
	bytes_read = read (fd, buffer, BUFFER_SIZE);
	printf("()COPY_FROM_BUFFER #2 bytes_read:%i\n", bytes_read);
	if (bytes_read <= 0)
	{
		printf("()bytes read NUUUUUUUUUUUUUUUUUUUUL:%i\n", bytes_read);
		return (NULL);
	}
	i = 0;
	while (bytes_read > i) // >=
	{
		ft_lstadd_back(&list, ft_lstnew(buffer[i]));
		i++;
	}
	if(bytes_read < BUFFER_SIZE){
		ft_lstadd_back(&list, ft_lstnew('\n'));
		return (NULL);
	}
	return (list);
}

// CONTAIN_N comprueba si hay \n en cada nodo de la lista

int	contain_n(t_list *list)
{	
	t_list * aux;

	if (list == NULL)
    {
        printf("()CONTAIN_N: list is NULL\n");
        return 2;  // No newline, list is empty (REVISAR!)
    }	
	aux = list;
	printf("()CONTAIN_N #1: outside the loop\n");
	while (aux != NULL)
	{
		printf("()CONTAIN_N #2: inside the loop\n");
		if (aux -> content == '\n')
		{
			return 1;
		}
		aux = aux -> next;
	}
	return 0;
}

// ft_lstadd_back coloca un nodo de lista new al final de la lista lst, enlazandolos

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	tmp = *list;
	if ((*list) && new)
	{
		while (tmp -> next != NULL)
			tmp = tmp -> next;
		tmp -> next = new;
	}
	else if (!(*list) && new)
	{
		*list = new;
	}
}

// ft_lstnew crea un nodo de lista usando el contenido del buffer

t_list	*ft_lstnew(char buffer_content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = buffer_content;
	new -> next = NULL;
	return (new);
}

char *copy_to_string(t_list **list)
{
	t_list	*aux;
	char 	*line_to_print;
	int		size;
	int		i;

	aux = *list;
	size = 0;
	i = 0;
	printf("()COPY_TO_STRING #1: outside the loop\n");
	if(list == NULL)
		printf("()COPY_TO_STRING #2: list es nulo\n");
	while(aux != NULL && aux -> content != '\n')
	{	
		printf("()COPY_TO_STRING #3: counting size\n");
		aux = aux -> next;
		size++;
	}
	printf("()COPY_TO_STRING #4: after counting size\n");
	line_to_print = (char *)malloc((size + 1) * sizeof(char));
	printf("()COPY_TO_STRING #5: size = %i\n", size);
	//aux2 = list;
	t_list temp;
	while(*list != NULL && (*list) -> content != '\n')
	{
		line_to_print[i] = (*list) -> content;
		printf("()COPY_TO_STRING #8 line_to_print: %s\n", line_to_print);
		/* (?) *///aux2 = list;
		i++;
		printf("()COPY_TO_STRING #8 i: %i\n", i);
		if (i < size)
		{
			printf("()COPY_TO_STRING #8 size: %i\n", size);
			/*Aquí deberías liberar memoria (tanto el content como el nodo)*/
			/*temp = aux2;*/
			*list = (*list) -> next; // el problema tiene que estar aqui
			/*lstdelone(temp, free)*/
		}
		else
			break;
		//free(aux);
	}
	*list = (*list) -> next;
	if((*list) -> content == '\n'){
		*list = (*list) -> next;
	}
	/*aux2 = aux2 -> next para saltar el /n*/
	/*list = aux2*/
	/*En realidad puedes quitar el aux2 y usar solamente list*/
	line_to_print[i] = '\0';
	printf("()COPY_TO_STRING #9: ¿line_to_print? %s\n", line_to_print);
	return (line_to_print);
}

void print_list(t_list *list)
{
	t_list *a = list;
	printf("list content: [");
	while(a != NULL){
		printf("%c, ", a -> content);
		a = a -> next;
	}
	printf("]\n");
}
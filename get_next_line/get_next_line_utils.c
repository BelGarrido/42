/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:19:18 by anagarri          #+#    #+#             */
/*   Updated: 2025/02/13 21:19:18 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int contain_n(t_list *list)
{
	int		size;
	t_list	*aux;
	
	size = 0;
	aux = list;
	if (!list)
		return (0);
	//printf("LIST CONTENT: ");
	while(aux != NULL)
	{
		//printf("%c", aux->content);
		if(aux->content == '\n')
			return size + 1; //vigilar si este +1 es necesario
		aux = aux -> next;
		size++;
	}
	//printf("\n");
	return (0);
}

//Si no modifica la lista, pasarla como doble puntero y manejarla así
int copy_from_buffer(t_list **list, int fd)
{
	char	*buffer;
	int		bytes_read;
	int		i;

	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
		return (-1); // Error handling
	i = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (i<bytes_read)
	{
		ft_lstadd_back(list, ft_lstnew(buffer[i]));
		i++;
	}
	//ALTERNATIVE WHILE VERSION (GPT)
	/*
	while(i<bytes_read){
		t_list *new_node = ft_lstnew(buffer[i]);
        if (!new_node) {
            free(buffer);
            return -1;  // Handle allocation failure
        }
        ft_lstadd_back(list, new_node);
        i++;
	}
	*/
	/*Lo mismo ni es necesario, porque devuelvo los bytes read y lo uso luego para hacer un break en el bucle y salir de él directamente*/
	if (bytes_read < BUFFER_SIZE && bytes_read > 0)
	{
			ft_lstadd_back(list, ft_lstnew('\n')); //Artificial \n at EOF
	}
	if (bytes_read == 0 && (*list))
	{
		//printf("bytes read: %i\n",bytes_read);
		ft_lstadd_back(list, ft_lstnew('\n'));
		return (0);
	}
	free(buffer);
	return (bytes_read);
}


char *copy_to_string(t_list **list, int size)
{
	t_list	*aux;
	int		i;
	char	*line;

	i = 0;
	if (!list || !(*list))
        return (NULL);  // Safety check
	line = (char *)malloc(size+1*sizeof(char));
	if (!line)
        return (NULL);
	while(i < size){ // < o <= ?
		line[i] = (*list)->content;
		aux = (*list);
		*list = (*list)->next;
		//ft_lstdelone(aux);
		free(aux);
		i++;
	}
	// Hay que avanzar otra posición para saltar el \n?
	/* 
	// Advance list to skip the '\n'
    if (*list && (*list)->content == '\n') {
        aux = *list;
        *list = (*list)->next;
        lstdelone(aux, free);
    }
	*/
	line[i] = '\0';
	return (line);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if ((*lst) && new)
	{
		while (tmp -> next != NULL)
			tmp = tmp -> next;
		tmp -> next = new;
	}
	else if (!(*lst) && new)
	{
		*lst = new;
	}
}

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

/* void print_list(t_list *list)
{
	t_list *a = list;
	printf("list content: [");
	while(a != NULL){
		printf("%c, ", a -> content);
		a = a -> next;
	}
	printf("]\n");
} */

void	ft_lstdelone(t_list *lst)
{
	if (lst != NULL)
	{
		free(&(lst -> content));
		free(lst);
	}
}
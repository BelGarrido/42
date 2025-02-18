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

int check_list_write(t_list *list, int eof)
{
	int		size;
	t_list	*aux;
	
	size = 0;
	aux = list;
	if (!list)
		return (0);
	while(aux != NULL)
	{
		if(aux->content == '\n')
			return size + 1;
		aux = aux -> next;
		size++;
	}
	if (eof>0)
		return size;
	return (0);
}

int copy_from_buffer(t_list **list, int fd, int eof)
{
	char	*buffer;
	int		bytes_read;
	int		i;
	
	if(eof>0){
		return 1;
	}
	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
	{
		free_list(list);
		return (-1);
	}
	if(((bytes_read = read(fd, buffer, BUFFER_SIZE)) < BUFFER_SIZE))
	{
		if(bytes_read<0){
            free(buffer);
            free_list(list);
            return -1;
        }else if(bytes_read==0){
            free(buffer);
            return 1;
        }
		eof = 1;
		//free(buffer);
		//esto es lo que decia ruben?
	}
	i = 0;
	while (i<bytes_read)
	{
		t_list *new_node = ft_lstnew(buffer[i]);
		if (!new_node)
		{
			free(buffer);
			free_list(list);
			return (-1);
		}
		ft_lstadd_back(list, new_node);
		i++;
	}
	free(buffer);
	return (eof);
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
	while(i < size){
		line[i] = (*list)->content;
		aux = (*list);
		*list = (*list)->next;
		free(aux);
		i++;
	}
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

void	ft_lstdelone(t_list *lst)
{
	if (lst != NULL)
	{
		free(lst);
	}
}

void	free_list(t_list **list)
{
	t_list *tmp;
	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
}
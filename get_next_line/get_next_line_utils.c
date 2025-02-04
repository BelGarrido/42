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

t_list * copy_from_buffer(t_list *list, int fd)
{
	char *buffer;
	int	i;
	buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
		return (NULL);

	int bytes_read;
	bytes_read = read (fd, buffer, BUFFER_SIZE);
	if (bytes_read < 0)
		return (NULL);
	i = 0;
	while (bytes_read > i) // >=
	{
		ft_lstadd_back(list, ft_lstnew(buffer[i]));
		i++;
	}
	return (list);
}

int	contain_n(t_list *list)
{
	while (list != NULL)
	{
		if (list -> content == '\n')
		{
			return 1
		}
		list = list -> next;
	}
	return 0
}

// _________________________________________________________________________________________________

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

// _________________________________________________________________________________________________

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


while(contain_n(list) == 0){
	if (!copy_from_buffer(list, fd))
		return (NULL)
}

copy_to_string()
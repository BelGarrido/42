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

int	append_node(t_list **list, int bytes_read, char *buffer)
{
	t_list	*new_node;
	int		i;

	i = 0;
	while (i < bytes_read)
	{
		new_node = ft_lstnew(buffer[i]);
		if (!new_node)
			return (clean_buffer(buffer, list, -1));
		ft_lstadd_back(list, new_node);
		i++;
	}
	return (0);
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

void	ft_lstdelone(t_list *lst)
{
	if (lst != NULL)
	{
		free(lst);
	}
}

int	clean_buffer(char *buffer, t_list **list, int re)
{
	t_list	*tmp;

	if (buffer)
		free(buffer);
	if (list)
	{
		while (*list)
		{
			tmp = *list;
			*list = (*list)->next;
			free (tmp);
		}
	}
	return (re);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anaigd93@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:00:07 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/17 11:00:07 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <fcntl.h>   // For open(), O_RDONLY, etc.
#include <unistd.h>  // For read(), close(), etc.
#include <stdlib.h>  // For malloc(), free(), etc.
#include <stdio.h>   // For debugging with printf(), perror(), etc.

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5  // Default buffer size


#endif

typedef struct s_list
{
	char			content;
	struct s_list 	*next;
}	t_list;

char	* get_next_line(int fd);
int		copy_from_buffer(t_list **list, int fd);
int		contain_n(t_list *list);
void	ft_lstadd_back(t_list **list, t_list *new);
t_list	*ft_lstnew(char buffer_content);
char	*copy_to_string(t_list **list, int size);
void	print_list(t_list *list);
void	ft_lstdelone(t_list *lst);

#endif

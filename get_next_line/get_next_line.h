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

#include <fcntl.h>   // For open(), O_RDONLY, etc.
#include <unistd.h>  // For read(), close(), etc.
#include <stdlib.h>  // For malloc(), free(), etc.
#include <stdio.h>   // For debugging with printf(), perror(), etc.

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1  // Default buffer size

#endif

typedef struct t_list
{
	char			content;
	struct t_list 	*next;
}	t_list;
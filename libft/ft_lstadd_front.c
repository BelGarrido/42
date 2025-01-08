/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:16:40 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/08 11:16:40 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		(*new).next = *lst;
		*lst = &(*new);
	}
}

/* int main (void)
{
	char *name = "Ana";
	char *name2 = "Ruben";
	//int n = 5;
	t_list *lst;
	t_list *new;
	lst = ft_lstnew(name);
	new = ft_lstnew(name2);
	t_list **poslst = &lst;
	ft_lstadd_front(poslst, new);
	printf("%s\n", (char *)((**poslst).content));
	printf("%s\n", (char *)(new -> content));
	printf("%s\n", (char *)((*new).content));
	printf("%i\n", ft_lstsize(lst));
} */
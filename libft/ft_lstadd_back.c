/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:16:31 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/08 11:16:31 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* int main (void)
{
	char *number = "hola";
	char *name2 = "que tal";
	t_list *ll;
	ll = ft_lstnew(number);
	ll -> next = ft_lstnew(number);
	ll -> next -> next = ft_lstnew(number);
	ll -> next -> next -> next = ft_lstnew("adios");
	t_list *new = ft_lstnew(name2);
	ft_lstadd_back(&ll, new);
	ll = ft_lstlast(ll);
 	printf("%s\n", (char *)(ll -> content));
} */

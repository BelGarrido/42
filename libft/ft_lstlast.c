/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:17:08 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/08 11:17:08 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/* int main (void)
{
	char *number = "hola";
	t_list *ll;
	ll = ft_lstnew(number);
	ll -> next = ft_lstnew(number);
	ll -> next -> next = ft_lstnew(number);
	ll -> next -> next -> next = ft_lstnew("adios");
	ll = ft_lstlast(ll);
 	printf("%s\n", (char *)(ll -> content));
}
 */
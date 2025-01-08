/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:17:26 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/08 11:17:26 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/*int main (void)
{
	char *number = "hola";
	int n = 5;
	t_list *ll;
	t_list *ll2;
	ll = ft_lstnew(number);
	ll2 = ft_lstnew(&n);
	void *c = ll -> content;
	printf("%s\n", (char *)c);
 	printf("%i\n", ((int *)(ll2->content))[0]);
	printf("%i\n", *(int *)(ll2->content));
}*/

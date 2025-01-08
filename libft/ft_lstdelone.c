/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:33:02 by marvin            #+#    #+#             */
/*   Updated: 2025/01/07 14:33:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst -> content);
		free(lst);
	}
}

/* void ft_del(void *patatita)
{
	free(patatita);
} */

/* int main (void)
{
	printf("UNO");
	char *number1 = ft_strdup("hola1");
	t_list *lst1;
	lst1 = ft_lstnew(number1);
	char *number2 = ft_strdup("hola2");
	t_list *lst2;
	lst2 = ft_lstnew(number2);
	char *number3 = ft_strdup("hola3");
	t_list *lst3;
	lst3 = ft_lstnew(number3);
	char *number4 = ft_strdup("hola4");
	t_list *lst4;
	lst4 = ft_lstnew(number4);
	printf("HOLA");
	t_list *ll;
	ll = lst1;
	ll -> next = lst2;
	lst2 -> next = lst3;
	lst3 -> next = lst4;
	//ft_lstdelone(ll -> next -> next, &ft_del);
	ft_lstdelone(lst3, &ft_del);
 	printf("%i\n", ft_lstsize(ll));
} */
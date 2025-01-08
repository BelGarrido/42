/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarri <anagarri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:17:32 by anagarri          #+#    #+#             */
/*   Updated: 2025/01/08 11:17:32 by anagarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (lst == NULL)
		return (0);
	while (lst -> next != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/*int main (void)
{
	char *number = "hola";
	int count;
	t_list *ll;
	ll = ft_lstnew(number);
	ll -> next = ft_lstnew(number);
	ll -> next -> next = ft_lstnew(number);
	ll -> next -> next -> next = ft_lstnew(number);
	count = ft_lstsize(ll);
 	printf("%i\n", count);
}*/

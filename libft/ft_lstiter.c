#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{	
	if (lst)
	{
		while (lst -> next != NULL)
		{
			f(lst -> content);
			lst = lst -> next;
		}
		f(lst -> content);
	}
}

/* void ft_print (void *content)
{
	char *cont = (char *)content;
	while (*cont != '\0')
	{	
		write(1, cont, 1);
		cont++;
	}
}

int	main(void)
{
	char *name = "Ana";
	char *surname = "Garrido";
	t_list *lst;
	t_list *new = ft_lstnew(surname);
	lst = ft_lstnew(name);
	ft_lstadd_back(&lst, new);
	ft_lstiter(lst, ft_print);
	printf("\n");
} */

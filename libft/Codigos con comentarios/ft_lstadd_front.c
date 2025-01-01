#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
/* 	printf("Posición de memoria inicial de *new: %p\n", lst);
	printf("contenido inicial de *lst: %p\n", *lst);
	printf("contenido inicial de **lst: %p\n", **lst); */

	if(new && lst)
	{
		//printf("hola\n");
		(*new).next = *lst;
		*lst = &(*new);
	}
/* 	printf("Content de lst (deberia ser Ruben): %s\n", (char *)((*lst) -> content));
	printf("Content de next (deberia ser Ana): %s\n", (char *)((*lst) -> next -> content));
	printf("Posición de memoria inicial de *new: %p\n", &(*new));
	printf("contenido inicial de *lst: %p\n", &(*lst));
	printf("contenido inicial de **lst: %p\n", *lst); */
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
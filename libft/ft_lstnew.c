#include "libft.h"

t_list *ft_lstnew (void *content)
{
	t_list *new = malloc(sizeof(t_list));
	if(!new)
		return NULL;
	new -> content = content;
	new -> next = NULL;
	return new;
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
	//accede al content de ll2 (que es un void *) lo castea a int *, lo agrupa con unos parentesis y ese conjunto lo desreferencia con los [0]
	printf("%i\n", *(int *)(ll2->content));
	//accede al content de ll2 (que es un void *) lo castea a int * y lo desreferencia (dada una posición de memoria, leer el contenido de la posición de memoria) utilizando el '*' del principio
}*/

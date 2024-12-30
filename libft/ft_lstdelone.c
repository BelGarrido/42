#include "libft.h"

void	ft_lstdelone (t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst -> content);
		free(lst);
	}
}

void ft_del(void *patatita)
{
	free(patatita);
}

int main (void)
{
	char *number1 = ft_strdup("hola1");
	char *number2 = ft_strdup("hola2");
	char *number3 = ft_strdup("hola3");
	char *number4 = ft_strdup("hola4");
	t_list *ll;
	ll = ft_lstnew(number1);
	ll -> next = ft_lstnew(number2);
	ll -> next -> next = ft_lstnew(number3);
	ll -> next -> next -> next = ft_lstnew(number4);
	t_list *elem3 = ll -> next;
	//ft_lstdelone(ll -> next -> next, &ft_del);
	ft_lstdelone(elem3, &ft_del);
 	printf("%i\n", ft_lstsize(ll));
}
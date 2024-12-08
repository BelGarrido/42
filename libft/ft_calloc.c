#include <stdlib.h>
#include <stdio.h>

void    *ft_memset(void *ptr, int x, size_t n);

void	*ft_calloc(size_t num, size_t element_size)
{	
	if (num == 0 || element_size == 0)
    	num = element_size = 1;
	void	*mem = malloc(num * element_size);
	ft_memset(mem, '\0', num * element_size);

	return (mem);	
}

int main()
{	
	int num = 10;
	int *mem = (int *)ft_calloc(num, sizeof(int));
	int i= 0;
	while(i < num)
	{
		printf("%d\n", mem[i]);
		i++;
	}
	
}
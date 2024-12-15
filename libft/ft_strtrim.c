#include <stdio.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int lenS1 = ft_strlen(s1);
	char *result = (char *)malloc((lenS1 + 1)*sizeof(char));
	char *result2 = (char *)malloc((lenS1 + 1)*sizeof(char));
	int len = ft_strlen(result);
	
	while (s1[i] != '\0') // comprobación de s1[i] con cada elemento en set[j]
	{	
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else if (set[j] == '\0')
		{
			break;
		}
		else
			j++;
	}
	// while (set[j] != '\0') // comprobación de s1[i] con cada elemento en set[j]
	// {
	// 	if (set[j] == s1[i])
	// 		i++;
	// 	else
	// 		j++;
	// }
	while (s1[i] != '\0')
	{
		result[k] = s1[i];
		i++;
		k++;
	}
	result[k] = '\0';
	j = 0;
	// while (s1 + len > result) // comprobación de s1[i] con cada elemento en set[j]
	// {	
	// 	if (result[len] == set[j])
	// 	{
	// 		len--;
	// 		j = 0;
	// 	}
	// 	else if (set[j] == '\0')
	// 	{
	// 		break;
	// 	}
	// 	else
	// 		j++;
	// }
	// result[len] = '\0';
	return result;
	// comprobación de s1[i] con cada elemento en set[j]
		// hay coincidencia --> ese elemento NO se copia y pasamos al siguiente de s1 ()


		// NO hay coincidencia --> ese elemento sí se copia en nueva string recortada
		// una vez NO hay coincidencia --> se aborta la operación y se comienza desde el final
	// malloc nueva string recortada
	// return nueva string recortada

	// **/hola/**     set = */
}

int main (void)
{
	char *string = "**.hola..*";
	char *set = "*.";
	char *newstring = ft_strtrim(string, set);
	printf("%s\n", newstring);
}
#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{   
    int i;
    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return 0;
}

int main (){

    char s1[] = "hola Anita";
    char s2[] = "hola Znita";
    printf("%i\n",  ft_strcmp (s1, s2));
    printf("%i\n",  strcmp (s1, s2));
    return 0;
}
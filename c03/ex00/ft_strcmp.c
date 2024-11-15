#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;    
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]); 
        i++;
    }
    return (s1[i] - s2[i]);
}

int main() 
{
    char str1[] = "ABCF";
    char str2[] = "ABCD";
    printf("ft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
    return (0);
}
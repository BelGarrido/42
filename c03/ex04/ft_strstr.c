//#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;

    if (to_find[0] == '\0')
    {
        return str;
    }

    while (str[i] != '\0')
    {
        j = 0;
        while(to_find[j] != '\0' && str[i+j] == to_find[j])
        {
            j++;
        }
        if(to_find[j] == '\0')
        {
            return str+i;
        }
        i++;
    }
    return NULL;
}

/*int main()
{
    char str1[] = "Australopitecus";
    char to_find1[] = "lop";
    char *result1 = ft_strstr(str1, to_find1);
    printf("ft_strstr(str1, to_find1) = %s\n", result1);
    return (0); 
}*/
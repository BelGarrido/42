#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *string)
{   
    int i;
    int neg;
    int number;

    i = 0;
    neg = 1;
    number = 0;
    
    while (string[i] == ' ')
        i++;
    if (string [i] == '+' || string[i] == '-')
    {
        if (string[i] == '-')
        {
            neg = -neg;
        }
        i++;
    }
    while (string[i] != '\0')
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            number = number * 10 + string[i] - 48;
            i++;
        }
        else
            break;   
    }
    return number * neg;
}

int main(void)
{
    int i;
    int j;
    char s[] = " ++36 53";
    i = ft_atoi(s);     /* i = -9885 */
    j = atoi(s);
    printf("i = %d\n",i);
    printf("j = %d\n",j);
}
#include <stdlib.h>

int     ft_atoi_help(char *numb)
{
    int i;
    int minus;
    int plus;
    int res;

    i = 0;
    minus = 0;
    plus = 0;
    res = 0;
    while (numb[i] == ' ')
        i++;
    while (numb[i] == '+' || numb[i] == '-')
    {
        numb[i] == '+' ? plus++ : minus++;
        i++;    
    }
    while (numb[i] >= '0' && numb[i] <= '9')
    {
        res = res * 10 + numb[i] - '0';
        i++;
    }
    if (minus + plus > 1)
        return (0);
    else if (minus)
        return (res *= -1);
    return (res);
}

int     *ft_atoi(char *height, char *width)
{
    int     *arr;

    arr = malloc(sizeof(arr) * 2);
    arr[0] = ft_atoi_help(height);
    arr[1] = ft_atoi_help(width);
    return (arr);
}
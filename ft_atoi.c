#include"libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sing;
    int val;

    sing = 1;
    i = 0;
    val = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sing = sing * (-1);
            i++;
        }
        else
            i++;
    }
    while (str[i] <= '9' && str[i] >= '0' && str[i])
    {
        val = val * 10 + (str[i] - 48);
        i++; 
    }
    return(val * sing);
}
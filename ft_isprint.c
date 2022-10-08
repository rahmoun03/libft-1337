#include"libft.h"

int ft_isprint(int c)
{
    if (c >= 0 && c <= 9)
        c += 48;
    if (c >= 32 && c <= 126)
        return(1);
    return (0);
}
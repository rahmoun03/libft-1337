#include "libft.h"

int ft_isalnum(int c)
{
    if (c >= 0 && c <= 9)
        return (1);
    else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return(1);
    return(0);
}

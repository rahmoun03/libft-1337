#include"libft.h"

size_t  ft_strlcpy(char *dst, const char * src, size_t dstsize)
{
    if (!dstsize)
        return(ft_strlen(src));
    size_t i;

    i = 0;
    while ((dstsize - 1) != i && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    while (dstsize != i)
    {
        dst[i] = '\0';
        i++;
    }
    return(ft_strlen(src));
}
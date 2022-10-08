#include"libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t ds;
    size_t d;

    i = 0;
    ds = ft_strlen(dst);
    d = ds;
    while (src[i] && (dstsize - 1) != i)
    {
        dst[ds] = src[i];
        i++;
        ds++;
    }
    dst[ds] = '\0';
    return(ft_strlen(src) + d);

}
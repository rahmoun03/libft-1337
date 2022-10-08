#include"libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t ds;
    size_t d;
    size_t s;


    i = 0;
    ds = ft_strlen(dst);
    d = ft_strlen(src);
    s = ft_strlen(dst);
    if (ds > dstsize)
        return (ft_strlen(src) + dstsize);
    while(ds < dstsize - 1)
        dst[ds++] = src[i++];
    dst[ds] = '\0';
    return(s + d);
}
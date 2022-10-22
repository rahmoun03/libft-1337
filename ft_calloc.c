#include"libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *re;
    size_t  i;

    i = 0;
    re = (char *)malloc(count * size);
	if(!re)
		return(NULL);
	ft_bzero(re, (count * size));
    return(re);
}

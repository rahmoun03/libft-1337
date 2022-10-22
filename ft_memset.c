#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0;
	unsigned char *val;
	val = (unsigned char *)b;
	while (i < len)
	{
		val[i] = (unsigned char)c;
		i++;
	}
	return(val);
}
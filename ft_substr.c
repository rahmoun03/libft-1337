#include"libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s1;
    char *s2;
    size_t i;

    i = 0;
    s1 = (char *)s;
    s2 = (char *)malloc(len);
    if (!(s) || !(len) ||!(s2))
        return((char *)malloc(1));
    while (s1[i] && i < len)
    {
        s2[i] = s1[start + i];
        i++;
    }
    s2[i] = '\0';
    return(s2);
}

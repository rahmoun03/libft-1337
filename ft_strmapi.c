#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *s1;
    char *re;
    int i;

    if (!s || !f)
        return (0);
    s1 = (char *)s;
    if(!(re = (char *)malloc(ft_strlen(s) + 1)))
        return (0);
    i = 0;
    while (s[i])
    {
        re[i] = f(i, s[i]);
        i++;
    }
    re[i] = '\0';
    return (re);    
}
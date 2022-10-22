#include"libft.h"

int ft_start(char *s1, char *s2)
{
    int i;
    int a;
    int skip;
    
    skip = 0;
    i = 0;
    while (s1[i])
    {
        a = 0;
        while (s2[a])
        {
            if (s1[i] == s2[a] && s2[a])
            {
                skip++;
                break;
            }
            a++;
        }
        if (!s2[a])
            return (skip);
        i++;
    }
    if (ft_strlen(s1) - ft_strlen(s2) == 0)
    {
        if(ft_strncmp(s1, s2, ft_strlen(s1)))
            return(-1);
    }
    return (skip);
}

int ft_end(char *s1, char *s2, int i)
{
    int a;
    int skip;
    
    skip = 0;
    i--;
    while ( i != ft_start(s1, s2))
    {
        a = 0;
        while (s2[a])
        {
            if (s1[i] == s2[a] && s2[a])
            {
                skip++;
                break;
            }
            a++;
        }
        if (!s2[a])
            return (skip);
        i--;
    }
    return (skip);
}
char    *ft_strcpy(char *s1, char *s2)
{
    char *dst;
    int i;
    int a;
    int start;

    start = ft_start(s1, s2);
    a = 0;
    i = (int)ft_strlen(s1) - start - ft_end(s1, s2, (int)ft_strlen(s1));
    dst = (char *)malloc(i + 1);
    while(a < i)
    {
        dst[a] = s1[start];
        start++;
        a++;
    }
    dst[a] = '\0';
    return (dst);
}

char *ft_strtrim(char const *s1, char const *s2)
{
    char *re;
    char *s11;
    char *s22;
    size_t i;

    i = ft_strlen(s1);
    s11 = (char *)s1;
    s22 = (char *)s2;
    re = ft_strcpy(s11, s22);
    return (re);
}
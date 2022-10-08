#include"libft.h"

char    *ft_strrchr(const char *s, int c)
{
    if (!s)
        return(NULL);
    int i;
    int a;
    char *val;

    val = (char *)s;
    i = 0;
    a = ft_strlen(s) - 1;
    while (s[a] != c && a != 0)
        a--;
    if (s[a] == c)
    {
        while (s[a])
        {
            val[i] = s[a];
            i++;
            a++;
        }
        val[i] = '\0';
        return(val);
    }
    else if (a == 0)
        return(NULL);
    return(NULL);
}
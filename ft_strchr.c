#include"libft.h"

char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return(NULL);
    int i;
    int a;
    char *val;

    i = 0;
    a = 0;
    val = (char*)s;
    while(c != s[i] && s[i] != '\0')
        i++;
    if (c == s[i])
    {
        while (s[i])
        {
            val[a] = s[i];
            a++;
            i++;
        }
        val[a] = '\0';
        return(val);
    }
    else if(!s[i])
        return(NULL);
    return(NULL);
}
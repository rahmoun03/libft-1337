#include"libft.h"

char *ft_min()
{
	char *p;
	p = (char *)malloc(12);
	p = "-2147483648";
	return(p);
}
char *ft_convert(char *re, int n)
{
    int i;

    i = 0;
    while (n > 0)
    {
        re[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    re[i] = '\0';
    return (re);
}

char *ft_swap(char *re)
{
    int i;
    int y;
    char s1;

    y = ft_strlen(re) - 1;
    i = 0;
    while (i != y && i < y )
    {
        s1 = re[i];
        re[i] = re[y];
        re[y] = s1;
        i++;
        y--;
    }
    return(re);
}

char *ft_itoa(int n)
{
    char *re;
    int i;
    int val;
    
    i = 0;
    val = n;
	if (n == -2147483648)
		return (ft_min());
    if (n == 0)
        return("0");
    if (n < 0)
        n = n * (-10);
    while (n >= 1)
        n = n / 10;i++;
    re = (char *)malloc(i + 1);
    if(!re)
        return (NULL);
    if(val < 0)
    {
        re[0] = '-';
        val = val * (-1);
        return(ft_swap(ft_convert((re + 1), val)) - 1);
    }
    return(ft_swap(ft_convert((re), val)));
}
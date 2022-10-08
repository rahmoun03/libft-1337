#include<stdio.h>
#include<unistd.h>

int isalpha(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    else if (c <= 122 && c >= 97)
        return(1);
    return(0);
}
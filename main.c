#include"libft.h"

int main(void){
    char a[] = "123456";
    char b[] = "ayoub";
    printf("my >>>  %s\t%zu\n", b, ft_strlcat(b, a, 3));
    printf("his >>>  %s\t%zu\n", b, strlcat(b, a, 3));
}
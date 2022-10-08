#include"libft.h"

int main(void){
    char dst[15] = "papapas";
    char src[] = "ljl6a";
    printf("1...%s\t%zu\n", dst, ft_strlcat(dst, src, 0));
    char dst1[15] = "papapas";
    char src1[] = "ljl6a";
    printf("2...%s\t%zu\n", dst1, strlcat(dst1, src1,  0));
}
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;
	size_t	i;
	
	i = 0;
	sr = (char *)src;
	ds = (char *)dst;
	while(ds[i] == sr[i] && i < len)
		i++;
	while (i < len)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	int dst[10] ; 
// 	int dst1[10];
// 	//char s[] = "123456";

// 	int s[] = {1,2,3,4,5,6};
// 	printf("ft_memmove%s\n",ft_memmove(dst, s, 5));
// 	for(int i = 0; i < 4; i++)
// 		printf("%d\t", dst[i]);
// 	printf("\nmemmove%s\n",ft_memmove(dst1, s, 5));
// 	for(int i = 0; i < 4; i++)
// 		printf("%d\t", dst1[i]);
// }
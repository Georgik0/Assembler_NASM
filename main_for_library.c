#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>

void	test_strcpy()
{
	char	*src;
	char	*dst;
	char	*ft_src;
	char	*ft_dst;


	printf("########################TEST1#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(11);
	src = strdup("0123456789");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	strcpy(dst, src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	free(dst);
	dst = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(11);
	ft_src = strdup("0123456789");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	ft_strcpy(ft_dst, ft_src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	free(ft_dst);
	ft_dst = NULL;


	printf("########################TEST2#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(1);
	src = "";
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	strcpy(dst, src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	free(dst);
	dst = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(1);
	ft_src = "";
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	ft_strcpy(ft_dst, ft_src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	free(ft_dst);
	ft_dst = NULL;


	printf("########################TEST3#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(10);
	src = "tab			\\n\n";
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	strcpy(dst, src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	free(dst);
	dst = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(10);
	ft_src = "tab			\\n\n";
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	ft_strcpy(ft_dst, ft_src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	free(ft_dst);
	ft_dst = NULL;
}

int main(void)
{
	// char	*str = strdup("Test ft_strlen()");
	// int			out;

	// printf("str = |%s|\n", str);
	// out = ft_strlen(str);
	// printf("out = %d\n\n", out);

	test_strcpy();
	return 0;
}

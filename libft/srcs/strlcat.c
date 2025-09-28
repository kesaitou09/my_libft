#include "libft.h"

//size - dst_len > 0としてるのはサイズがない場合にヌル文字が入るのを防ぐため
//コピーする回数は　size - dst_len - 1回　はヌル文字終端を保証するため

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = strlen(src);
	dst_len = strlen(dst);
	j = 0;
	i = dst_len;
	if (size - dst_len > 0)
	{
		while (j < size - dst_len - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (dst_len + src_len);
}

int	main(void)
{
	char buf1[] = "aaa";
	char buf2[] = "jjkkkk";
	char buf3[] = "aaaaaaaaaa";

	char dst1[] = "dst1dayo";
	char dst2[] = "dst2dayo";
	char dst3[10];
	char dst4[10];
	char dst5[10];

	printf("dst1  %zu\n%s\n", ft_strlcat(dst1, buf1, sizeof(dst1)), dst1);
	printf("dst2  %zu\n%s\n", strlcat(dst2, buf1, sizeof(dst2)), dst2);
	//printf("dst3  %zu\n%s\n", ft_strlcpy(dst3, buf3, sizeof(dst3)), dst3);
	//printf("dst4  %zu\n%s\n", strlcpy(dst4, buf3, sizeof(dst4)), dst4);
}
	
	
	
	
	
	
	
	
	

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

int	main(void)
{
	char buf1[] = "";
	char buf2[] = "jjkkkk";
	char buf3[] = "aaaaaaaaaa";

	char dst1[10];
	char dst2[10];
	char dst3[10];
	char dst4[10];
	char dst5[10];

	printf("dst1  %zu\n%s\n", ft_strlcpy(dst1, buf2, sizeof(dst1)), dst1);
	printf("dst2  %zu\n%s\n", strlcpy(dst2, buf2, sizeof(dst2)), dst2);
	printf("dst3  %zu\n%s\n", ft_strlcpy(dst3, buf3, sizeof(dst3)), dst3);
	printf("dst4  %zu\n%s\n", strlcpy(dst4, buf3, sizeof(dst4)), dst4);
}
#include "libft.h"

// ヌル文字になるまで ＆＆サイズの回数だけ 探索文字列が出現するかを調べる。第二引数の終端まで一致してる場合のみその部分文字列の先頭を返す。
// 第二引数のn文字目までが存在するかどうかではない。

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*s1;
	const char	*s2;
	const char	*punc;
	size_t		i;

	i = 0;
	if (!*little)
		return (char *)(big);
	(s1 = big, s2 = little, punc = NULL);
	while (*s1 && i < len)
	{
		if (*s1 == *s2)
		{
			punc = s1;
			(s1++, s2++, i++);
			while (*s1 && i < len && (*s1 == *s2))
				(s1++, s2++, i++);
			if (!*s2)
				return (char *)(punc);
			s2 = little;
		}
		else
			(s1++, i++);
	}
	return (NULL);
}

//int	main(void)
//{
//	printf("libc %s\n", strnstr("abcdefhfiaefj", NULL, 30));
//	printf("my %s\n", ft_strnstr("abcdefhfiaefj", NULL, 30));
//	 printf("%s\n",strnstr("abcdefhijk","de",3));
//	 printf("%s\n",strnstr("abcdefhijk","de",3));
//	 printf("%s\n",strnstr("abcdefhijk","de",3));
//	 printf("%s\n",strnstr("abcdefhijk","de",3));
//}
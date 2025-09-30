#include "libft.h"

// 実装: strchr


//strchr () 関数とstrrchr () 関数は、一致した文字へのポインタを返します。
//文字が見つからない場合は NULL を返します。
//終端のヌルバイトは文字列の一部とみなされるため、c がaq\0aq 
//と指定されている場合、これらの関数は終端文字へのポインタを返します

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (char *)(s);
		}
		s++;
	}
	return (NULL);
}

int main(void)
{
	const char str[] = "ababbababa";
	printf("%p",strchr(str,'\0'));
	
	
	
	
	
}
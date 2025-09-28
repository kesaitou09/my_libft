#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
	const char	*end;
	const char	*p;

	p = s;
	while (*p)
		p++;
	if (*p == c)
		return (char *)(p);
	while (s < p)
	{
		if (*(p - 1) == c)
		{
			return (char *)(p - 1);
		}
		p--;
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n",strrchr("abbaaaaabbaifififohf ",'a'));
	printf("%s\n",ft_strrchr("abbaaaaabbaifififohf ",'a'));
	//printf("%s\n",strrchr("abbaaaaabbaifififohf",'a'));
}
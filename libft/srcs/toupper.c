#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	c1;

	if (c == EOF)
		return (EOF);
	c1 = (unsigned char)c;
	if (c1 >= 'a' && c1 <= 'z')
		return (int)(c1 - 32);
	return (int)(c1);
}

int	main(void)
{
	printf("%c\n", ft_toupper('\n'));
	printf("%c\n", toupper('\n'));
}
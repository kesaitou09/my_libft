#include "libft.h"

int	ft_tolower(int c)

{
	unsigned char c1;

	if (c == EOF)
		return (EOF);
	c1 = (unsigned char)c;
	if (c1 >= 'A' && c1 <= 'Z')
		return (int)(c1 + 32);
	return (int)(c1);
}

int	main(void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
}
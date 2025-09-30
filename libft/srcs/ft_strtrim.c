#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n);
static bool		is_set(char const *set, char c);
static char		*ft_strndup(const char *s, size_t n);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	const char	*start;
	const char	*end;
	char		*res;

	if (!s1 || !set)
		return (NULL);	
	len = 0;
	while (*s1 && is_set(set, *s1))
		s1++;
	start = s1;
	while (*s1 && !is_set(set, *s1))
		(s1++, len++);
	return (ft_strndup(start, len));
}

static bool	is_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (true);
		set++;
	}
	return (false);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*arr;
	size_t	len;

	len = ft_strnlen(s, n);
	if (len > SIZE_MAX - 1)
		return (NULL);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	ft_memcpy(arr, s, len);
	arr[len] = '\0';
	return (arr);
}

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] && len < n)
		len++;
	return (len);
}

// int	main(void)
//{
//	printf("%s\n", ft_strtrim("    \n\n\n\aaaaabbffnejhjehkj     \n\n\n",
//			" \n"));
// }
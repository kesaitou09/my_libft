#include "libft.h"

static char		*ft_strndup(const char *s, size_t n);
static size_t	ft_strnlen(const char *s, size_t n);
static size_t	count_words(const char *s, char c);
static size_t	word_len(const char *s, char c);
static void		free_split(char **s);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			arr[i] = ft_strndup(s, word_len(s, c));
			if (!arr[i++])
			{
				free_split(arr);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	arr[i] = NULL;
	return (arr);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s && *s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}
static size_t	count_words(const char *s, char c)
{
	size_t	len;
	size_t	in_word;

	len = 0;
	in_word = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			len++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (len);
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

static void	free_split(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

//int	main(void)
//{
//	char	**arr;

//	arr = ft_split("fijfijai@aaaaaaaaa@dddd@", 'f');
//	 printf("%zu", count_words("a n n nassk nnn", ' '));
//	printf("%p\n",ft_split("ABCDEF",'a')[1]);
//	for (int i = 0; arr[i]; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}

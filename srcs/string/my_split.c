#include "my_libc.h"

static size_t	count_w(char const *s, char c)
{
	size_t	words = 0;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static void	alloc_w(char const *s, char c, char **arr)
{
	size_t	letters = 0;
	int		i = 0;

	while (*s)
	{
		while (*s == c)
			s++;
		const char *start = s;
		while (*s && *s != c)
		{
			letters++;
			s++;
		}
		if (letters)
		{
			arr[i++] = my_substr(start, 0, letters);
			letters = 0;
		}
	}
}

char	**my_split(char const *s, char c)
{
	if (!s)
		return (NULL);

	size_t	words = count_w(s, c);
	char	**arr = (char **) malloc (sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	alloc_w(s, c, arr);
	arr[words] = 0;
	return (arr);
}

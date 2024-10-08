#include "my_libc.h"

static size_t	count_w(char const *s, char c)
{
	size_t	words;

	if (!s)
		return (0);
	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static void	alloc_w(char const *s, char c, char **arr)
{
	size_t	letters;
	int		i;

	i = 0;
	if (s)
	{
		letters = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				letters++;
				s++;
			}
			arr[i] = my_substr(s - letters, 0, letters);
			i++;
			letters = 0;
		}
	}
}

char	**my_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_w(s, c);
	arr = (char **) malloc (sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	alloc_w(s, c, arr);
	arr[words] = 0;
	return (arr);
}

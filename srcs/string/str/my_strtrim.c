#include "my_libc.h"

static int	my_find(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*my_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (my_find(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	len = my_strlen(s1);
	while (len != 0)
	{
		if (my_find(s1[len - 1], set) == 1)
			len--;
		else
			break ;
	}
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	my_strlcpy(s2, (char *)s1, len + 1);
	return (s2);
}

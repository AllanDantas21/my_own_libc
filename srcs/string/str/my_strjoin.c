#include "my_libc.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = my_strlen(s1);
	len2 = my_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	my_strcpy(s, s1);
	my_strcpy(s + len1, s2);
	return (s);
}

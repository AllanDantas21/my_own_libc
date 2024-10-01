#include "my_libc.h"

char	*my_strdup(const char *s)
{
	char	*s1;
	char	*s2;
	char	*pos;

	s1 = (char *)s;
	s2 = (char *)malloc(sizeof(char) * (my_strlen(s) + 1));
	if (!s2)
		return (NULL);
	pos = s2;
	while (*s1)
	{
		*s2++ = *s1++;
	}
	*s2 = 0;
	return (pos);
}

#include "my_libc.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*pos;

	if (!s1 || !s2)
		return (0);
	s = (char *)malloc(sizeof (char) * (my_strlen(s1) + my_strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	pos = s;
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = '\0';
	return (pos);
}

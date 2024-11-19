#include "my_libc.h"

char	*my_strdup(const char *s)
{
	size_t	len = my_strlen(s);
	char	*dup = (char *)malloc(sizeof(char) * (len + 1));

	if (!dup)
		return (NULL);
	my_memcpy(dup, s, len);
	dup[len] = '\0';
	return (dup);
}

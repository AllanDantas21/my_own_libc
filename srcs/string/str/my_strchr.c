#include "my_libc.h"

char	*my_strchr(const char *s, int c)
{
	unsigned char	uc = (unsigned char)c;

	while (*s)
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == uc)
		return ((char *)s);
	return (NULL);
}

#include "my_libc.h"

char	*my_strchr(const char *s, int c)
{
	unsigned char	*a;

	if (c > 127)
		c %= 256;
	a = (unsigned char *) s;
	while (*a)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a++;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}

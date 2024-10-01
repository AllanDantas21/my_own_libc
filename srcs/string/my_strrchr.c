#include "my_libc.h"

char	*my_strrchr(const char *s, int c)
{
	unsigned char	*a;

	if (c > 127)
		c %= 256;
	a = (unsigned char *)&s[my_strlen(s)];
	while (*s++)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a--;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}

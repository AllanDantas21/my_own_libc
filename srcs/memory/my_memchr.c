#include "my_libc.h"

void	*my_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n--)
	{
		if (*a == (unsigned char) c)
			return ((char *)(a));
		a++;
	}
	return (NULL);
}

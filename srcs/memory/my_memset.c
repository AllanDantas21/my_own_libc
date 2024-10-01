#include "my_libc.h"

void	*my_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
		*a++ = (unsigned char) c;
	return (s);
}

#include "my_libc.h"

void	*my_bzero(void *s, size_t n)
{
	char	*a;

	a = s;
	while (n--)
		*a++ = 0;
	return (s);
}

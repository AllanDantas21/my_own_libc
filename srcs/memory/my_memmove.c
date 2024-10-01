#include "my_libc.h"

void	*my_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dest;
	s = (char *) src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (dest > src)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

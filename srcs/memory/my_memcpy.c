#include "my_libc.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!src && !dest)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

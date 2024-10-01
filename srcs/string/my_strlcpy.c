#include "my_libc.h"

size_t	my_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = my_strlen(src);
	if (size > 0)
	{
		size -= 1;
		while (*src && size--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}

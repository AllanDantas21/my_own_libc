#include "my_libc.h"

size_t	my_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

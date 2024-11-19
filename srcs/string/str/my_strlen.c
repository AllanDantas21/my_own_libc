#include "my_libc.h"
size_t	my_strlen(const char *s)
{
	if (s == NULL)
		return (0);
	const char *start = s;
	while (*s)
		s++;
	return (s - start);
}

#include "my_libc.h"

size_t	my_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (size == 0)
		return (my_strlen(src));
	i = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + my_strlen(src));
}

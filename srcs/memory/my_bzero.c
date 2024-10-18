#include "my_libc.h"

void	*my_bzero(void *s, size_t n)
{
	uint64_t	*long_ptr;
	uint8_t		*byte_ptr;
	size_t		i;

	long_ptr = (uint64_t *)s;
	i = n / sizeof(uint64_t);
	while (i--)
		*long_ptr++ = 0;

	byte_ptr = (uint8_t *)long_ptr;
	i = n % sizeof(uint64_t);
	while (i--)
		*byte_ptr++ = 0;

	return (s);
}

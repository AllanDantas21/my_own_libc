#include "../../incs/my_libc.h"

/**
 * @file my_memcpy.c
 * @brief Implementation of the my_memcpy function.
 *
 * This file contains the implementation of the my_memcpy function, which
 * copies n bytes from memory area src to memory area dest.
 */

void	copy_chunks(unsigned long *d_long, const unsigned long *s_long, size_t n)
{
	size_t i;

	for (i = 0; i < n / sizeof(unsigned long); i++)
		d_long[i] = s_long[i];
}

void	copy_remaining_bytes(char *d_char, const char *s_char, size_t n)
{
	size_t i;

	for (i = 0; i < n % sizeof(unsigned long); i++)
		d_char[i] = s_char[i];
}

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long		*d_long;
	const unsigned long	*s_long;
	const char			*s_char;
	char				*d_char;

	if (!src && !dest)
		return (dest);
	d_long = (unsigned long *)dest;
	s_long = (const unsigned long *)src;
	copy_chunks(d_long, s_long, n);
	d_char = (char *)(d_long + (n / sizeof(unsigned long)));
	s_char = (const char *)(s_long + (n / sizeof(unsigned long)));
	copy_remaining_bytes(d_char, s_char, n);

	return (dest);
}

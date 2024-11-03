#include "my_libc.h"

/**
 * @file my_memmove.c
 * @brief Custom implementation of the memmove function.
 *
 * This function copies `n` bytes from memory area `src` to memory area `dest`.
 * The memory areas may overlap: copying takes place as though the bytes in `src`
 * are first copied into a temporary array that does not overlap `src` or `dest`,
 * and the bytes are then copied from the temporary array to `dest`.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area (`dest`).
 */

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

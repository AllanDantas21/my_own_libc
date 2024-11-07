#include "../../incs/my_libc.h"

/**
 * @brief Sets the first n bytes of the block of memory pointed by s to zero.
 *
 * @param s Pointer to the block of memory to fill.
 * 		This block of memory is assumed to be at least n bytes long.
 * @param n Number of bytes to be set to zero.
 *		size_t is an unsigned integer type.
 *		Therefore, the value of n cannot be negative.
 *	Its maximum value is SIZE_MAX.
 * @return void* A pointer to the memory block s.
 */

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

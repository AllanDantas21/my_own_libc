#include "my_libc.h"

/**
 * @file my_memchr.c
 * @brief Implementation of the my_memchr function.
 *
 * This file contains the implementation of the my_memchr function, which
 * searches for the first occurrence of a character in a block of memory.
 */

/**
 * @brief Searches for the first occurrence of a character in a block of memory.
 *
 * The my_memchr() function scans the initial n bytes of the memory area
 * pointed to by s for the first instance of c. Both c and the bytes of the
 * memory area pointed to by s are interpreted as unsigned char.
 *
 * @param s Pointer to the memory area to be scanned.
 * @param c Character to be located. It is passed as an int, but it is
 *          internally converted to an unsigned char.
 * @param n Number of bytes to be analyzed.
 * @return A pointer to the matching byte, or NULL if the character does not
 *         occur in the given memory area.
 */

void	*my_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;

	a = (unsigned char *)s;
	while (n--)
	{
		if (*a == (unsigned char) c)
			return ((char *)(a));
		a++;
	}
	return (NULL);
}

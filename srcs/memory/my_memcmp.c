#include "my_libc.h"

/**
 * @file my_memcmp.c
 * @brief Implementation of the my_memcmp function.
 *
 * This file contains the implementation of the my_memcmp function, which
 * compares two blocks of memory.
 */

/**
 * @brief Compares two blocks of memory.
 *
 * The my_memcmp() function compares the first n bytes of the memory areas
 * s1 and s2. The comparison is done lexicographically.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first
 *         n bytes of s1 is found, respectively, to be less than, to match,
 *         or be greater than the first n bytes of s2.
 */

int	my_memcmp(const void *s1, const void *s2, size_t n)
{
	register const unsigned char	*str1;
	register const unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n--)
	{
		if (*str1++ != *str2++)
			return *str1 < *str2 ? -1 : 1;
		str1++, str2++;
	}
	return (0);
}

#include "../../incs/my_libc.h"

/**
 * @file my_memset.c
 * @brief Custom implementation of the memset function.
 *
 * This file contains the implementation of the my_memset function, which 
 * sets the first n bytes of the memory area pointed to by s to the specified 
 * value c.
 *
 * @param s Pointer to the memory area to be filled.
 * @param c Value to be set. It is passed as an int, but it is converted to 
 *          an unsigned char when setting the memory.
 * @param n Number of bytes to be set to the value c.
 * @return The my_memset function returns a pointer to the memory area s.
 */
 
void	*my_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
		*a++ = (unsigned char) c;
	return (s);
}

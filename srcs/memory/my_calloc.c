#include "my_libc.h"

/**
 * @file my_calloc.c
 * @brief Custom implementation of the calloc function.
 *
 * This file contains the implementation of the my_calloc function, which
 * allocates memory for an array of nmemb elements of size bytes each and
 * initializes all bytes in the allocated storage to zero.
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element.
 * @return Pointer to the allocated memory, or NULL if the allocation fails.
*/

void	*my_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	my_bzero(array, (nmemb * size));
	return (array);
}

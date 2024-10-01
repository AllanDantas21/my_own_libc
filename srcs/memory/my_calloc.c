#include "my_libc.h"

void	*my_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	my_bzero(array, (nmemb * size));
	return (array);
}

#include "my_libc.h"

int	my_strncmp(const char *restrict s1, const char *restrict s2, size_t n)
{
	size_t			i = 0;

	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

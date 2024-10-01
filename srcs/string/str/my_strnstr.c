#include "my_libc.h"

char	*my_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	while ((big[i] != '\0'))
	{
		c = 0;
		while ((big[i + c] == little[c]) && (i + c) < len)
		{
			if (big[i + c] == '\0' && little[c] == '\0')
				return ((char *)&big[i]);
			c++;
		}
		if (little[c] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}

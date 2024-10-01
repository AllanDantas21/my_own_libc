#include "my_libc.h"

char	*my_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] && to_find[c])
	{
		if (str[i] == to_find[c])
			c++;
		else
			c = 0;
		i++;
	}
	if (to_find[c] == '\0')
		return (&str[i - c]);
	return (0);
}
#include "my_libc.h"

void	my_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i = -1;

	if (!s || !f)
		return ((void) NULL);
	while (s[++i] != '\0')
		f(i, &s[i]);
}

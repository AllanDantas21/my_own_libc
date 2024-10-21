#include "my_libc.h"

void	my_putstr_fd(char *s, int fd)
{
	if (!s)
		return ((void)0);
	write (fd, s, my_strlen(s));
}

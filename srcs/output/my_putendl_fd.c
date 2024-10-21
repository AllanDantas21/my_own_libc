#include "my_libc.h"

void	my_putendl_fd(char *s, int fd)
{
	if (!s)
		return ((void) NULL);
	write (fd, s, my_strlen(s));
	write (fd, "\n", 1);
}

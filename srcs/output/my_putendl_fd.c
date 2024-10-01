#include "my_libc.h"

void	my_putendl_fd(char *s, int fd)
{
	if (!s)
		return ((void) NULL);
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

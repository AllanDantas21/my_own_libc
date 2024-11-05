#include "my_libc.h"

/**
 * my_putendl_fd - Outputs the string 's' to the given file descriptor
 * followed by a newline.
 * @s: The string to output.
 * @fd: The file descriptor on which to write.
 *
 * This function writes the string 's' to the file descriptor specified by 'fd',
 * followed by a newline character. If 's' is NULL, the function does nothing.
 */
 
void	my_putendl_fd(char *s, int fd)
{
	if (!s)
		return ((void) NULL);
	write (fd, s, my_strlen(s));
	write (fd, "\n", 1);
}

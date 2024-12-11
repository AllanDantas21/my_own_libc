#include "my_libc.h"
/**
 * @file my_putstr_fd.c
 * @brief Outputs a string to the given file descriptor.
 *
 * This function writes the string `s` to the file descriptor `fd`.
 * If the string `s` is NULL, the function does nothing.
 *
 * @param s The string to be written.
 * @param fd The file descriptor to write to.
 */

void	my_putstr_fd(char *s, int fd)
{
	if (!s)
		return ((void)0);
	write (fd, s, my_strlen(s));
}

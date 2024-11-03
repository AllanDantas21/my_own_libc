#include "my_libc.h"

/**
 * @file my_putchar_fd.c
 * @brief Writes a character to the specified file descriptor.
 *
 * This function sends the character 'c' to the given file descriptor 'fd'.
 *
 * @param c The character to be written.
 * @param fd The file descriptor on which to write.
 */
 
void	my_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

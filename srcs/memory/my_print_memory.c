#include "../../incs/my_libc.h"

/**
 * @brief Prints the memory address in hexadecimal format.
 *
 * This function takes an unsigned long address and prints it in a 16-character
 * hexadecimal format followed by a colon and a space.
 *
 * @param addr The memory address to be printed.
 */

static void my_print_address(unsigned long addr);

/**
 * @brief Prints the content of memory in hexadecimal format.
 *
 * This function takes a pointer to memory and a limit, and prints the content
 * of the memory in hexadecimal format. If the limit is less than 16, it prints
 * spaces for the remaining bytes. It also adds a space after every two bytes.
 *
 * @param addr Pointer to the memory to be printed.
 * @param limit The number of bytes to be printed.
 */
static void my_hex_content(unsigned char *addr, unsigned int limit);

/**
 * @brief Prints the content of memory as characters.
 *
 * This function takes a pointer to memory and a limit, and prints the content
 * of the memory as characters. Non-printable characters (outside the range of
 * 32 to 126) are printed as dots.
 *
 * @param addr Pointer to the memory to be printed.
 * @param limit The number of bytes to be printed.
 */
static void my_print_chars(unsigned char *addr, unsigned int limit);
 
/**
 * @brief Adjusts the limit for memory printing.
 *
 * This function takes the current index and the total size, and adjusts the
 * limit for memory printing. If the current index plus 16 exceeds the size,
 * it returns the remaining size; otherwise, it returns 16.
 *
 * @param i The current index.
 * @param size The total size of the memory.
 * @return The adjusted limit for memory printing.
 */

static unsigned int adjust_limit(unsigned int i, unsigned int size);

static void	my_print_address(unsigned long addr)
{
	const char	*hex = "0123456789abcdef";
	char		address[16];
	int			i;

	i = 15;
	while (i >= 0)
	{
		address[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		write(1, &address[i], 1);
		i++;
	}
	write(1, ": ", 2);
}

static void	my_hex_content(unsigned char *addr, unsigned int limit)
{
	const char		*hex = "0123456789abcdef";
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < limit)
		{
			write(1, &hex[addr[i] / 16], 1);
			write(1, &hex[addr[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

static void	my_print_chars(unsigned char *addr, unsigned int limit)
{
	unsigned int	i;

	i = 0;
	while (i < limit)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

static unsigned int	adjust_limit(unsigned int i, unsigned int size)
{
	if (i + 16 > size)
		return (size - i);
	return (16);
}

/**
 * my_print_memory - Prints the memory content in a formatted way.
 * @addr: The starting address of the memory to be printed.
 * @size: The size of the memory to be printed.
 *
 * This function prints the memory content starting from the given address
 * up to the specified size. It prints the address, the hexadecimal content,
 * and the printable characters for each 16-byte block of memory.
 *
 * Return: The starting address of the memory.
 */

void	*my_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned int		limit;

	if (size < 1)
		return (addr);
	i = 0;
	while (i <= size)
	{
		limit = adjust_limit(i, size);
		my_print_address((unsigned long)addr + i);
		my_hex_content((unsigned char *)addr + i, limit);
		my_print_chars((unsigned char *)addr + i, limit);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
#include <stdio.h>
int main() {
	char str[] = "Bonjour les aminches\t\n\tc'est fou\tce \
	qu'on peutfaire avec\t\n\tprint_memory\n\nlol.lol\n ";
	my_print_memory((void *)str, sizeof(str));
	return 0;

dl*/

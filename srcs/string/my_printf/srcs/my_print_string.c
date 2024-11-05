#include "my_libc.h"

int	my_print_string(const char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		str = "(null)";
	while (str[counter] != '\0')
		write(1, &str[counter++], 1);
	return (counter);
}
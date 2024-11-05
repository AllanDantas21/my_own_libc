#include "my_libc.h"

int	my_print_unsigned(unsigned int n)
{
	char	*str;
	int		counter;

	counter = 0;
	str = utoa_base(n, 10, "0123456789");
	counter = my_print_string(str);
	free(str);
	return (counter);
}
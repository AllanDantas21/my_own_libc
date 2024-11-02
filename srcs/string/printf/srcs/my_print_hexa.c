#include "my_libc.h"

int	my_print_hexa(unsigned int n)
{
	int		counter;
	char	*str;

	counter = 0;
	str = utoa_base(n, 16, "0123456789abcdef");
	counter += my_print_string(str);
	free(str);
	return (counter);
}

int	my_print_hexa_upper(unsigned int n)
{
	int		counter;
	char	*str;

	counter = 0;
	str = utoa_base(n, 16, "0123456789ABCDEF");
	counter += my_print_string(str);
	free(str);
	return (counter);
}
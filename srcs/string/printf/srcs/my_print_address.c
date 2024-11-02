#include "my_libc.h"

int	my_printf_address(void *pointer)
{
	int					counter;
	char				*str;
	unsigned long long	address;

	counter = 0;
	address = (unsigned long long)pointer;
	if (!pointer)
	{
		counter = my_print_string("(nil)");
		return (counter);
	}
	str = utoa_base(address, 16, "0123456789abcdef");
	counter += my_print_string("0x");
	counter += my_print_string(str);
	free(str);
	return (counter);
}
#include "my_libc.h"

int	my_print_decimal(int decimal)
{
	char	*str;
	int		count;

	count = 0;
	str = my_itoa(decimal);
	count += my_print_string(str);
	free(str);
	return (count);
}
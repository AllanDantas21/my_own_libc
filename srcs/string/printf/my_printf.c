#include "my_libc.h"

static int	my_print_fmt(const char arg, va_list ap)
{
	int	count;

	count = 0;
	if (arg == 'c')
		count += my_print_char(va_arg(ap, int));
	else if (arg == 'd' || arg == 'i')
		count += my_print_decimal(va_arg(ap, signed int));
	else if (arg == 's')
		count += my_print_string(va_arg(ap, char *));
	else if (arg == 'p')
		count += my_print_address(va_arg(ap, void *));
	else if (arg == 'u')
		count += my_print_unsigned(va_arg(ap, unsigned int));
	else if (arg == 'x')
		count += my_print_hexa(va_arg(ap, unsigned int));
	else if (arg == 'X')
		count += my_print_hexa_upper(va_arg(ap, unsigned int));
	else if (arg == '%')
		count += write(1, "%", 1);
	return (count);
}

int	my_printf(const char *fmt, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			count += my_print_fmt(fmt[i + 1], ap);
			i++;
		}
		else
			count += write(1, &fmt[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
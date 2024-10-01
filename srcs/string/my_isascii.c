#include "my_libc.h"

int	my_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

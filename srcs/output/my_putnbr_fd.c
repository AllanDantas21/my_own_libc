#include "my_libc.h"

void	my_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		my_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		my_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		my_putnbr_fd(n / 10, fd);
		my_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		n += '0';
		write(fd, &n, 1);
	}
}

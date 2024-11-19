#include "my_libc.h"

int	my_atoi(const char *nptr)
{
	int	res = 0;
	int	sign = 1;

	while ((*nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = (*nptr++ == '-') ? -1 : 1;
	while (*nptr >= '0' && *nptr <= '9')
		res = res * 10 + (*nptr++ - '0');
	return (res * sign);
}

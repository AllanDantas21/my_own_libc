#include "my_libc.h"

static int	sizenum(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*my_itoa(int n)
{
	char	*str;
	long	nb;
	int		sign;
	int		len;

	nb = n;
	sign = 0;
	len = sizenum(nb);
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

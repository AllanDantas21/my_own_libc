#include "my_libc.h"

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	my_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (my_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	my_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = my_strlen(base);
	if (my_check_base(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb < len)
			write(1, &base[nb], 1);
		if (nb >= len)
		{
			my_putnbr_base(nb / len, base);
			my_putnbr_base(nb % len, base);
		}
	}
}
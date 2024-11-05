#include "my_libc.h"

/**
 * Checks if the given base is valid.
 *
 * A valid base must:
 * - Have at least 2 characters.
 * - Not contain any '+' or '-' characters.
 * - Not contain any whitespace or non-printable characters.
 * - Not contain any duplicate characters.
 *
 * @param base The base string to check.
 * @return 1 if the base is valid, 0 otherwise.
 */
int my_check_base(char *base);

/**
 * Converts an integer to a string representation in the specified base and
 * writes it to the standard output.
 *
 * The function first checks if the base is valid using `my_check_base`.
 * If the base is valid, it converts the integer `nbr` to the specified base
 * and writes the result to the standard output. If `nbr` is negative, a '-'
 * character is written before the number.
 *
 * @param nbr The integer to convert.
 * @param base The base string to use for conversion.
 */
void my_putnbr_base(int nbr, char *base);


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
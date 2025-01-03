#include "my_libc.h"

/**
 * my_atoi_base - Converts a string to an integer using a specified base.
 * @str: The string to be converted.
 * @base: The base to be used for conversion.
 *
 * This function converts the initial portion of the string pointed to by str 
 * to an integer value according to the given base. The base must be a valid 
 * base string, and the function checks for valid characters and signs.
 *
 * Return: The converted integer value, or 0 if the input string or base is invalid.
 */

static int	convert_base(char *str, int i, char *base)
{
	int	res;
	int	base_len;
	int	j;

	res = 0;
	base_len = my_strlen(base);
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				res = (res * base_len) + j;
				break ;
			}
			j++;
		}
		if (!base[j])
			break ;
		i++;
	}
	return (res);
}

static int	my_check_base(const char *base)
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

static int	check_sign(const char *str, int *i, int *sign)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
	return (*i);
}

int	my_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	if (!str || !base || !my_check_base(base))
		return (0);
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	check_sign(str, &i, &sign);
	res = convert_base(str, i, base);
	return (res * sign);
}
/*
#include <stdio.h>
int my_atoi_base(char *str, char *base);

void test_my_atoi_base(char *str, char *base, int expected)
{
	int result = my_atoi_base(str, base);
	if (result == expected)
		printf("Test passed for input '%s' with base '%s'. 
		Result: %d\n", str, base, result);
	else
		printf("Test failed for input '%s' with base '%s'. 
	Expected: %d, Got: %d\n", str, base, expected, result);
}*/
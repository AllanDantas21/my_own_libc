#include "my_libc.h"

/**
 * @brief Converts the initial portion of the string pointed to by nptr to int.
 *
 * This function parses the C-string nptr, interpreting its content as an 
 * integral number, which is returned as an int value. The function discards 
 * any whitespace characters (as determined by isspace) until the first 
 * non-whitespace character is found. Then, it takes an optional initial plus 
 * or minus sign followed by as many base-10 digits as possible, and converts 
 * them to an integer.
 *
 * @param nptr Pointer to the null-terminated byte string to be interpreted.
 * @return The converted integral number as an int. If no valid conversion 
 * could be performed, it returns zero.
 */
 
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

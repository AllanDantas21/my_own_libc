#include "my_libc.h"

/**
 * @file my_is_prime.c
 * @brief This file contains the function to check if a number is prime.
 */

/**
    * @brief Checks if a number is prime.
    *
    * This function checks if the given number is prime. A prime number is a
    * positive integer greater than 1 that has no positive integer divisors other
    * than 1 and itself. If the number is prime, the function returns 1. Otherwise,
    * it returns 0.
    *
    * @param n The number to check.
    * @return 1 if the number is prime, 0 otherwise.
    */
int my_is_prime(int n)
{
    int i;

    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    i = 5;
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
        i += 6;
    }
    return 1;
}
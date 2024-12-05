#include "my_libc.h"
/**
 * @file my_sqrt.c
 * @brief Computes the square root of a given number using inline assembly.
 *
 * This function uses the `fsqrt` instruction to compute the square root of a 
 * double-precision floating-point number.
 *
 * @param x The number for which to compute the square root.
 * @return The square root of the input number.
 */

double  my_sqrt(double x)
{
    double  result;

    __asm__("fsqrt" : "=t"(result) : "0"(x));
    return result;
}
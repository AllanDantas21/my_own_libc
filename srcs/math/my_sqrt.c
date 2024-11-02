#include "my_libc.h"

double  my_sqrt(double x)
{
    double  result;

    __asm__("fsqrt" : "=t"(result) : "0"(x));
    return result;
}
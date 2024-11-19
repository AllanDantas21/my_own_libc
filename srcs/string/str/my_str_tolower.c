#include "my_libc.h"

/**
 * @file my_str_tolower.c
 * @brief Converts all characters in a string to lowercase.
 *
 * This function takes a string and converts all of its characters to lowercase
 * using the my_tolower function. If the input string is NULL, the function 
 * returns immediately without performing any operations.
 *
 * @param s The string to be converted to lowercase. If s is NULL, the function 
 *          does nothing.
 */
 
void    my_str_tolower(char *s)
{
    if (s == NULL)
        return ;
    while (*s)
        *s = my_tolower(*s), s++;
}
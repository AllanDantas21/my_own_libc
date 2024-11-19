#include "my_libc.h"

/**
 * @file my_str_toupper.c
 * @brief Converts all lowercase letters in a string to uppercase.
 *
 * This function takes a string and converts all of its lowercase letters
 * to uppercase using the my_toupper function. If the input string is NULL,
 * the function returns immediately without making any changes.
 *
 * @param s A pointer to the string to be converted to uppercase.
 */
 
void    my_str_toupper(char *s)
{
    if (s == NULL)
        return ;
    while (*s)
        *s = my_toupper(*s), s++;
}
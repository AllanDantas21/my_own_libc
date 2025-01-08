#include "my_libc.h"

/**
 * @brief Counts the number of strings in a null-terminated array of strings.
 *
 * This function takes a null-terminated array of strings (matrix) and counts
 * the number of strings in it. It iterates through the array until it finds
 * a null pointer, which indicates the end of the array.
 *
 * @param matrix A null-terminated array of strings.
 * @return The number of strings in the array.
 */
 
int    my_count_matrix(char **matrix)
{
    int i;
    i = 0;
    while (matrix[i])
        i++;
    return (i);
}
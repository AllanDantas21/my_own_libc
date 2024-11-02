#include "my_libc.h"

int    my_count_matrix(char **matrix)
{
    int i;
    i = 0;
    while (matrix[i])
        i++;
    return (i);
}
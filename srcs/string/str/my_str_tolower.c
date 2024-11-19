#include "my_libc.h"

void    my_str_tolower(char *s)
{
    if (s == NULL)
        return ;
    while (*s)
        *s = my_tolower(*s), s++;
}
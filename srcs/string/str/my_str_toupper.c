#include "my_libc.h"

void    my_str_toupper(char *s)
{
    if (s == NULL)
        return ;
    while (*s)
        *s = my_toupper(*s), s++;
}
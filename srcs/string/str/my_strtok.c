#include "my_libc.h"

static int my_strspn(char *s, const char *accept)
{
    size_t i;

    i = 0;
    while (s[i] && my_strchr(accept, s[i]))
        i++;
    return (i);
}

char  *my_strpbrk(char *s, const char *accept)
{
    size_t i;

    i = 0;
    while (s[i] && !my_strchr(accept, s[i]))
        i++;
    return (&s[i]);
}

char *my_strtok(char *s, const char *delim)
{
    static char *last = NULL;
    char *token;

    if (s == NULL)
        s = last;
    s += my_strspn(s, delim);
    if (*s == '\0')
    {
        last = NULL;
        return (NULL);
    }
    token = s;
    s = my_strpbrk(token, delim);
}
#include "my_libc.h"

void my_list_reverse(t_list **begin_list)
{
    t_list *prev;
    t_list *next;

    prev = NULL;
    while (begin_list && *begin_list)
    {
        next = (*begin_list)->next;
        (*begin_list)->next = prev;
        prev = *begin_list;
        *begin_list = next;
    }
    *begin_list = prev;
}
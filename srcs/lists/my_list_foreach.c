#include "my_libc.h"

void my_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        f(begin_list->content);
        begin_list = begin_list->next;
    }
}

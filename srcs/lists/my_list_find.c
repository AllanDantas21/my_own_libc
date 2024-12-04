#include "my_libc.h"

t_list *my_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    if (!begin_list || !data_ref || !cmp)
        return (NULL);
    while (begin_list)
    {
        if(!cmp(begin_list->data, data_ref))
            return (begin_list);
        begin_list = begin_list->next;
    }
    return (NULL);
}
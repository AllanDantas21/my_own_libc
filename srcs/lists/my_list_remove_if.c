#include "my_libc.h"

void my_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *prev;
    t_list *next;

    prev = NULL;
    while (*begin_list)
    {
        next = (*begin_list)->next;
        if (!cmp((*begin_list)->content, data_ref))
        {
            free_fct((*begin_list)->content);
            if (prev)
                prev->next = next;
            else
                *begin_list = next;
        }
        prev = *begin_list;
        begin_list = &(*begin_list)->next;
    }
}
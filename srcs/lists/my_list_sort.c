#include "my_libc.h"

void my_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *i;
    t_list *j;
    void *temp;

    if (!begin_list || !*begin_list)
        return;

    i = *begin_list;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if ((*cmp)(i->content, j->content) > 0)
            {
                temp = i->content;
                i->content = j->content;
                j->content = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}
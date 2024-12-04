#include "my_libc.h"

static void my_list_merge(t_list **begin_list1, t_list *begin_list2);
static void my_list_sort(t_list **begin_list, int (*cmp)());

void my_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    my_list_merge(begin_list1, begin_list2);
    my_list_sort(begin_list1, cmp);
}

static void my_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *tmp;

    tmp = *begin_list1;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = begin_list2;
}

static void my_list_sort(t_list **begin_list, int (*cmp)())
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
            if ((*cmp)(i->data, j->data) > 0)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}
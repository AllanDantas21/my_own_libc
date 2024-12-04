#include "my_libc.h"

static void my_list_sort(t_list **begin_list, int (*cmp)());
static void my_list_push_front(t_list **begin_list, void *data);

void my_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    my_list_push_front(begin_list, data);
    my_list_sort(begin_list, cmp);
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

static void my_list_push_front(t_list **begin_list, void *data)
{
    t_list *node;

    if (!data)
        return;
    node = (t_list *)malloc(sizeof(t_list));
    if (node)
    {
        node->data = data;
        node->next = *begin_list;
        *begin_list = node;
    }
}
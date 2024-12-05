#include "my_libc.h"

void my_sorted_list_insert(t_list **begin_list, void *content, int (*cmp)())
{
    my_lstadd_front(begin_list, content);
    my_list_sort(begin_list, cmp);
}

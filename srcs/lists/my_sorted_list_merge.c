#include "my_libc.h"

void my_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    my_list_merge(begin_list1, begin_list2);
    my_list_sort(begin_list1, cmp);
}

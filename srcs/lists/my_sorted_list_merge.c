#include "my_libc.h"

/**
 * Merges two sorted lists into one sorted list.
 * 
 * @param begin_list1 Pointer to the first list.
 * @param begin_list2 Pointer to the second list.
 * @param cmp Comparison function to sort the list.
 */
void my_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    my_list_merge(begin_list1, begin_list2);
    my_list_sort(begin_list1, cmp);
}

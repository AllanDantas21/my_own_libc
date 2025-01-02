#include "my_libc.h"

/**
 * Inserts an element into a sorted list.
 * 
 * @param begin_list Pointer to the list.
 * @param content Content to be inserted.
 * @param cmp Comparison function to sort the list.
 */
void my_sorted_list_insert(t_list **begin_list, void *content, int (*cmp)())
{
    my_lstadd_front(begin_list, content);
    my_list_sort(begin_list, cmp);
}

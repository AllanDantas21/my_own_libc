#include "my_libc.h"

/**
 * @file my_list_find.c
 * @brief Function to find an element in a linked list.
 *
 * This function searches for an element in a linked list that matches the
 * reference data using a comparison function.
 *
 * @param begin_list Pointer to the first element of the list.
 * @param data_ref Pointer to the reference data to compare against.
 * @param cmp Function pointer to the comparison function. The comparison
 * function should return 0 if the elements match.
 *
 * @return Pointer to the first element in the list that matches the reference
 * data, or NULL if no match is found or if any of the input parameters are NULL.
 */
 
t_list *my_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    if (!begin_list || !data_ref || !cmp)
        return (NULL);
    while (begin_list)
    {
        if(!cmp(begin_list->content, data_ref))
            return (begin_list);
        begin_list = begin_list->next;
    }
    return (NULL);
}
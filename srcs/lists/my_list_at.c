#include "my_libc.h"

/**
 * @file my_list_at.c
 * @brief Retrieves the nth element from a linked list.
 *
 * This function traverses a linked list and returns the element at the
 * specified position (0-based index). If the position is out of bounds,
 * the function returns NULL.
 *
 * @param begin_list A pointer to the first element of the linked list.
 * @param nbr The index of the element to retrieve (0-based).
 * @return A pointer to the nth element of the list, or NULL if the index
 *         is out of bounds.
 */
 
t_list *my_list_at(t_list *begin_list, unsigned int nbr)
{
    while(nbr-- && begin_list)
        begin_list = begin_list->next;
    return (begin_list);
}

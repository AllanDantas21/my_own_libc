#include "my_libc.h"

/**
 * @file my_list_merge.c
 * @brief Merges two linked lists.
 *
 * This function takes two linked lists and merges the second list into the first one.
 *
 * @param begin_list1 A pointer to the pointer of the first linked list.
 * @param begin_list2 A pointer to the second linked list.
 *
 * @note The function assumes that both lists are non-empty and that the first list
 *       has at least one element.
 */
 
void my_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *tmp;

    tmp = *begin_list1;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = begin_list2;
}
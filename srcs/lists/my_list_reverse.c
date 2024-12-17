#include "my_libc.h"

/**
 * @file my_list_reverse.c
 * @brief Reverses the order of elements in a linked list.
 *
 * This function takes a pointer to the head of a linked list and reverses
 * the order of its elements. After the function completes, the head of the
 * list will point to the last element, and the last element will point to NULL.
 *
 * @param begin_list A double pointer to the head of the linked list.
 */

void my_list_reverse(t_list **begin_list)
{
    t_list *prev;
    t_list *next;

    prev = NULL;
    while (begin_list && *begin_list)
    {
        next = (*begin_list)->next;
        (*begin_list)->next = prev;
        prev = *begin_list;
        *begin_list = next;
    }
    *begin_list = prev;
}
#include "my_libc.h"

/**
 * @file my_list_foreach.c
 * @brief Applies a function to each element of a linked list.
 *
 * This function iterates through each element of a linked list and applies
 * the given function to the content of each element.
 *
 * @param begin_list A pointer to the first element of the list.
 * @param f A function pointer to the function to be applied to each element's content.
 */
 
void my_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        f(begin_list->content);
        begin_list = begin_list->next;
    }
}

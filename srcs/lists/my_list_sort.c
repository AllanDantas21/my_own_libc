#include "my_libc.h"

/**
 * @file my_list_sort.c
 * @brief Sorts a linked list using the provided comparison function.
 *
 * This function sorts the elements of a linked list in ascending order
 * based on the comparison function provided. The sorting algorithm used
 * is a simple bubble sort.
 *
 * @param begin_list A pointer to the pointer to the first element of the list.
 * @param cmp A pointer to the comparison function. The comparison function
 * should return a positive value if the first argument is greater than the
 * second, zero if they are equal, and a negative value if the first argument
 * is less than the second.
 *
 * @note The function assumes that the list elements' content can be swapped
 * by swapping their `content` pointers.
 */

void my_list_sort(t_list **begin_list, int (*cmp)())
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
            if ((*cmp)(i->content, j->content) > 0)
            {
                temp = i->content;
                i->content = j->content;
                j->content = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}
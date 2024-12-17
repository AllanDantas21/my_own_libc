#include "my_libc.h"

/**
 * @file my_lstadd_back.c
 * @brief Adds a new element at the end of a linked list.
 *
 * This function takes a pointer to the first element of a linked list and a new
 * element to be added. If the list is empty, the new element becomes the first
 * element. Otherwise, the new element is added at the end of the list.
 *
 * @param lst A double pointer to the first element of the list.
 * @param new The new element to be added to the list.
 */
 
void	my_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = my_lstlast(*lst);
	tmp->next = new;
}

#include "my_libc.h"

/**
 * @file my_lstclear.c
 * @brief Implementation of a function to clear a linked list.
 *
 * This function iterates through a linked list and applies a given delete
 * function to each element, freeing the memory allocated for each node.
 * After clearing all elements, the list pointer is set to NULL.
 *
 * @param lst A double pointer to the head of the linked list.
 * @param del A function pointer to a function that takes a void pointer
 *            and frees the memory allocated for the content of a node.
 */

void	my_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*element;

	if (!lst || !del)
		return ;
	element = *lst;
	while (element != NULL)
	{
		tmp = element->next;
		my_lstdelone(element, del);
		element = tmp;
	}
	*lst = NULL;
}

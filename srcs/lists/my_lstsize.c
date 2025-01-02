#include "my_libc.h"

/**
 * Calculates the size of a list.
 * 
 * @param lst Pointer to the list.
 * @return The size of the list.
 */
int	my_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

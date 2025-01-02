#include "my_libc.h"

/**
 * Returns the last element of a list.
 * 
 * @param lst Pointer to the list.
 * @return Pointer to the last element.
 */
t_list	*my_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (tmp == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

#include "my_libc.h"

/**
 * Deletes an element of a list.
 * 
 * @param lst Pointer to the element to be deleted.
 * @param del Function to delete the content of the element.
 */
void	my_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

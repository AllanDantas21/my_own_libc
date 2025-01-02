#include "my_libc.h"

/**
 * Applies a function to each element of a list.
 * 
 * @param lst Pointer to the list.
 * @param f Function to apply to each element.
 */
void	my_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

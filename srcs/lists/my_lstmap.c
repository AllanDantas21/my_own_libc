#include "my_libc.h"

/**
 * Applies a function to each element of a list and creates a new list.
 * 
 * @param lst Pointer to the list.
 * @param f Function to apply to each element.
 * @param del Function to delete an element.
 * @return Pointer to the new list.
 */
t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_elem = my_lstnew(f(lst->content));
		if (!new_elem)
		{
			my_lstclear(&new_lst, del);
			return (NULL);
		}
		my_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

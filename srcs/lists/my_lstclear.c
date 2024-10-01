#include "my_libc.h"

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

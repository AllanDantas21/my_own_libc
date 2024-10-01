#include "my_libc.h"

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

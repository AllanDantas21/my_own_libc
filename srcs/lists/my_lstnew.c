#include "my_libc.h"

/**
 * Creates a new list element.
 * 
 * @param content Content of the new element.
 * @return Pointer to the new element.
 */
t_list	*my_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

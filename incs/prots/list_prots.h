#ifndef LIST_PROTS_H
#define LIST_PROTS_H

t_list	*my_lstnew(void *content);
t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*my_lstlast(t_list *lst);
t_list  *my_list_at(t_list *begin_list, unsigned int nbr);
t_list  *my_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void    my_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
void    my_list_foreach(t_list *begin_list, void (*f)(void *));
void	my_lstiter(t_list *lst, void (*f)(void *));
void	my_lstdelone(t_list *lst, void (*del)(void *));
void	my_lstclear(t_list **lst, void (*del)(void *));
void	my_lstadd_front(t_list **lst, t_list *new);
void    my_list_reverse(t_list **begin_list);
void    my_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
void    my_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
void    my_list_merge(t_list **begin_list1, t_list *begin_list2);
void    my_list_sort(t_list **begin_list, int (*cmp)());
void    my_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

#endif
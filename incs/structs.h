#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_btree
{
	struct s_btree *left;
	struct s_btree *right;
	void *item;
}	t_btree;

#endif
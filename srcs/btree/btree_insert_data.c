#include "my_libc.h"

void	btree_insert_data(t_btree **root, void *item,
    int (*cmpf)(void *, void *))
{
    t_btree	*new_node;

    if (root == NULL)
        return ;
    while (*root != NULL)
    {
        if (cmpf(item, (*root)->item) < 0)
            root = &(*root)->left;
        else
            root = &(*root)->right;
    }
    new_node = malloc(sizeof(t_btree));
    if (new_node == NULL)
        return ;
    new_node->item = item;
    new_node->left = NULL;
    new_node->right = NULL;
    *root = new_node;
}

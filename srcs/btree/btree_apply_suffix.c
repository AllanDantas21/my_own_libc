#include "my_libc.h"

/**
 * btree_apply_suffix - Applies a function to each node of a binary tree using
 *                      suffix (post-order) traversal.
 * @root: Pointer to the root node of the binary tree.
 * @applyf: Function to apply to each node's item.
 *
 * This function traverses the binary tree in post-order (left, right, root)
 * and applies the given function to each node's item.
 */
 
void btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
    if (!root)
        return ;
    btree_apply_suffix(root->left, applyf);
    btree_apply_suffix(root->right, applyf);
    applyf(root->item);
}
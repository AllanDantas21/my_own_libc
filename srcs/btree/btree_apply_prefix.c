#include "my_libc.h"

/**
 * Applies a function to each node of a binary tree using prefix traversal.
 *
 * @param root A pointer to the root node of the binary tree.
 * @param applyf A pointer to the function to apply to each node's item.
 *               The function should take a single void pointer as an argument.
 *
 * The function traverses the binary tree in prefix order (root, left, right)
 * and applies the given function to each node's item.
 */
 
void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
    if (!root)
        return ;
    applyf(root->item);
    btree_apply_prefix(root->left, applyf);
    btree_apply_prefix(root->right, applyf);
}
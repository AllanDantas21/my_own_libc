#include "my_libc.h"

/**
 * btree_apply_infix - Applies a function to each item in a binary tree using
 *                     infix traversal (left, root, right).
 * @root: Pointer to the root node of the binary tree.
 * @applyf: Function to apply to each item in the tree.
 *
 * This function traverses the binary tree in an infix order and applies the
 * given function to each item in the tree. If the tree is empty (root is NULL),
 * the function returns immediately.
 */
 
void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
    if (root == NULL)
        return ;
    btree_apply_infix(root->left, applyf);
    applyf(root->item);
    btree_apply_infix(root->right, applyf);
}
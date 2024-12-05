#include "my_libc.h"

/**
 * @file btree_create_node.c
 * @brief This file contains the function to create a new binary tree node.
 */

/**
 * @brief Creates a new binary tree node.
 *
 * This function allocates memory for a new binary tree node and initializes
 * its item with the provided value. The left and right children of the node
 * are set to NULL.
 *
 * @param item A pointer to the item to be stored in the new node.
 * @return A pointer to the newly created binary tree node, or NULL if memory
 * allocation fails.
 */
 
t_btree *btree_create_node(void *item)
{
    t_btree *node;

    node = malloc(sizeof(t_btree));
    if (node == NULL)
        return (NULL);
    node->item = item;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
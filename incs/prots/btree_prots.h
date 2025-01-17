#ifndef BTREE_PROTS_H
#define BTREE_PROTS_H

void btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void btree_apply_infix(t_btree *root, void (*applyf)(void *));
void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

#endif
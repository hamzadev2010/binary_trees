#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Cheking.
 * @node: Cheking the node.
 *
 * Return: 1 if success otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *nod)
{
	if (!nod)
		return (0);
	if (!(nod->left) && !(nod->right))
		return (1);
	return (0);
}
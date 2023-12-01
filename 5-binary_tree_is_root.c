#include "binary_trees.h"

/**
 * binary_tree_is_root - Cheking the root node.
 * @node: Checking the node.
 *
 * Return: 1 if success otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}

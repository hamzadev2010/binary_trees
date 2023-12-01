#include "binary_trees.h"

/**
 * binary_tree_nodes - Script that counting leave
 * @tree: The root of the node
 * Return: Counting of no leave otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;


	if (!tree)
		return (0);

	count = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	return (count);
}

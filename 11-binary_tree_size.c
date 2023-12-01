#include "binary_trees.h"

/**
 * binary_tree_size - Script that measure size
 * @tree: Measure root
 *
 * Return: The size of tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		sz += 1;
		if (tree->left)
		{
			sz += binary_tree_size(tree->left);
		}
		if (tree->right)
		{
			sz += binary_tree_size(tree->right);
		}
		return (sz);
	}
}

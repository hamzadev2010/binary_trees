#include "binary_trees.h"
/**
 * binary_tree_depth - Function of depth measure
 * @tree: Measure depth
 * Return: None
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->parent)
		{
			d = binary_tree_depth(tree->parent);
			d += 1;
		}
		return (d);
	}
}

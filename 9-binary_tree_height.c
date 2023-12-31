#include "binary_trees.h"
/**
 * binary_tree_height - Function in binary tree
 * @tree: Tree root
 * Return: None.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0;
	size_t hright = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->left)
		{
			hleft = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			hright = 1 + binary_tree_height(tree->right);
		}
		if (hleft > hright)
		{
			return (hleft);
		}
		else
		{
			return (hright);
		}
	}
}

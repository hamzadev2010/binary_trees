#include "binary_trees.h"
/**
 * binary_tree_is_full - Script fo checking binary tree 'full'
 * @tree: Root of tree
 * Return: 1 for succed 0 for fail
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
	else
	{
		return (0);
	}
}

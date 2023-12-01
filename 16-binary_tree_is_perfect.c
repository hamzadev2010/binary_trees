#include "binary_trees.h"
/**
 * binary_tree_height - Script that measure height of binary tree
 * @tree: Root tree
 * Return: None
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
/**
 * binary_tree_is_perfect - Script to checking binary tree is perfect
 * @tree: Root tree
 * Return: 1 is success 0 fail
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) !=
			binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}

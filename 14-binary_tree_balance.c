#include "binary_trees.h"
/**
 * binary_tree_height - Script that measure height
 * @tree: Root of the node
 * Return: The Height of the tree
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
 * binary_tree_balance - Script that of factor balance
 * @tree: Root of the node
 * Return: Factor of balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft, hright;

	if (!tree)
		return (0);

	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	if (tree->left)
		hleft++;
	if (tree->right)
		hright++;

	return (hleft - hright);
}


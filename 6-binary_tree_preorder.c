#include "binary_trees.h"

/**
 * binary_tree_preorder - Function in binary tree.
 * @tree: Tree of the root.
 * @func: pointer function to calling.
 *
 * Return: None
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - Function in binary tree
 * @tree: Tree root
 * @func: Function to call.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

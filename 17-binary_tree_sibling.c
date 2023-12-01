#include "binary_trees.h"
/**
 * binary_tree_sibling - Script that found sbiling on binary tree
 * @node: Node pointer
 * Return: Sbiling pointer
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent && node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_uncle - Script to find uncle o binary tree
 * @node: Pointer of the node 
 * Return: Uncle pointer 
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent ||
	    !node->parent->parent )
	{
		return (NULL);
	}
	if (node->parent->parent &&
	    node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}

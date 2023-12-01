#include "binary_trees.h"
/**
 * binary_tree_delete - Script that delete the node.
 * @tree: Pointing of the node deleting.
 * Return: None to do.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
	{
	return;
	}
	else
	{
if (tree->left != NULL)
		{
	binary_tree_delete(tree->left);
		}
if (tree->right != NULL)
		{
binary_tree_delete(tree->right);
		}
		free(tree);
	}
}

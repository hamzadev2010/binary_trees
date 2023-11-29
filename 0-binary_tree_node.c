#include "binary_trees.h"
/**
 * create_binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to assign to the new node
 * Return: Pointer to the new node ct
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ct;

	ct = malloc(sizeof(binary_tree_t));
	if (ct == NULL)
	{
		free(ct);
		return (NULL);
	}
	else
	{
		ct->n = value;
		ct->parent = parent;
		ct->left = NULL;
		ct->right = NULL;
		return (ct);
	}
}

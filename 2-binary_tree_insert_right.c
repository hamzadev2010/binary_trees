#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserting.
 * @parent: Inserting on the new node.
 * @value: Value of the new node.
 * Return: Creating new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		(parent->right)->parent = newnode;
		newnode->right = parent->right;
	}
	parent->right = newnode;
	return (newnode);
}

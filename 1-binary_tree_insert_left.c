#include "binary_trees.h"

/**
 *binary_tree_insert_left - function that iserts a node to the left of parent
 *@parent: pointer to the node to insert the left child in
 *@value: value to store in the new node
 *Return: a pointer to the created node or NULL on failure
 *if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		old_node = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = old_node;
		old_node->parent = parent->left;
	}
	return (parent->left);
}

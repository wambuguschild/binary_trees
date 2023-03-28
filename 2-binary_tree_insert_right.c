#include "binary_trees.h"i

/**
 *binary_tree_insert_right - function that iserts a node to the right of parent
 *@parent: pointer to the node to insert the left child in
 *@value: value to store in the new node
 *Return: a pointer to the created node or NULL on failure
 *if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		old_node = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = old_node;
		old_node->parent = parent->right;
	}
	return (parent->right);
}

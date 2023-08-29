#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts left-child node
 * @parent: Pointer to node where insert left-child
 * @value: Value to put in the new node
 * Return: Pointer to the new node else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	parent->left = new_left_node;

	return (new_left_node);
}

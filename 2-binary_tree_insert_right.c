#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts right-child  node
 * @parent: Pointer to the node to insert right-child
 * @value: Value to put in the new node
 * Return: Pointer to the new node otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	parent->right = new_right_node;

	return (new_right_node);
}

#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: pointer to  parent node of node to create
 * @value: Value to put in new node
 * Return: ponter to new node || NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}

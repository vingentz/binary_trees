#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if binary tree is full
 * @tree: Pointer to the root node
 * Return: If tree is full return 1 else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

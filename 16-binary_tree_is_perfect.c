#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int treeleaf = 0;

	if (node && !(node->left) && !(node->right))
		treeleaf = 1;
	return (treeleaf);
}

/**
 * binary_tree_is_parent_full - checks if node is parent
 * @node: pointer to the node to check
 * Return: 1 if node is a parent, else 0
 */
int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int treeparent = 0;

	if (node && node->left && node->right)
		treeparent = 1;
	return (treeparent);
}

/**
 * height - find height of a binary tree
 * @tree: Pointer to the root node
 * Return: If tree is NULL return 0 else Height
 */
int height(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;

	if (tree)
	{
		leftheight  = tree->left ? height(tree->left) + 1 : 0;
		rightheight = tree->right ? height(tree->right) + 1 : 0;
		return ((leftheight > rightheight) ? leftheight : rightheight);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - finds if binary tree is perfect
 * @tree: Pointer to the root node
 * Return: If tree is perfect return 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);
		if (binary_tree_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}
	return (0);
}

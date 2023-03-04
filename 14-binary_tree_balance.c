#include "binary_trees.h"

/**
 * binary_tree_balance_ - Helper function for binary_tree_balance function
 * @tree: Points to the root node of a binary tree
 *
 * Return: Height of the binary tree
 */
int binary_tree_balance_(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance_(tree->left);
	right_height = binary_tree_balance_(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - Computes the balance factor of a binary tree
 * @tree: Points to the root node of the tree
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance_(tree->left);
	right_height = binary_tree_balance_(tree->right);

	return (left_height - right_height);
}

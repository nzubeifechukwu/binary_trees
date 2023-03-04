#include "binary_trees.h"

/**
 * binary_tree_height_ - Measures the height of a binary tree
 * @tree: Points to the root node of the binary tree
 *
 * Return: Height of the tree, 0 if @tree is NULL
 */
size_t binary_tree_height_(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height_(tree->left);
	right = binary_tree_height_(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Points to the root node of a binary tree
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_tree_height_(tree) - 1);
}

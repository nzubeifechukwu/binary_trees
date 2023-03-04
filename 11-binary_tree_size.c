#include "binary_trees.h"

/**
 * binary_tree_size_ - Helper function for binary_size_tree function
 * @tree: Points to the root node of a binary tree
 * @size: Holds the size of the three
 */
void binary_tree_size_(const binary_tree_t *tree, size_t *size)
{
	if (tree == NULL)
		return;

	*size = *size + 1;
	binary_tree_size_(tree->left, size);
	binary_tree_size_(tree->right, size);
}

/**
 * binary_tree_size - Computes the size of a binary tree
 * @tree: Points to the root node of the binary tree
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	binary_tree_size_(tree, &size);

	return (size);
}

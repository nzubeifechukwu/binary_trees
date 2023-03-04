#include "binary_trees.h"

/**
 * binary_tree_leaves_ - Helper function fot binary_tree_leaves function
 * @tree: Points to the root node of the binary tree
 * @leaf_count: Stores the number of leaves in the tree
 */
void binary_tree_leaves_(const binary_tree_t *tree, size_t *leaf_count)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
		(*leaf_count)++;

	binary_tree_leaves_(tree->left, leaf_count);
	binary_tree_leaves_(tree->right, leaf_count);
}

/**
 * binary_tree_leaves - Computes the number of leaves in a binary tree
 * @tree: Points to the root node of the tree
 *
 * Return: Number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree == NULL)
		return (0);

	binary_tree_leaves_(tree, &leaf_count);

	return (leaf_count);
}

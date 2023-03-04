#include "binary_trees.h"

/**
 * binary_tree_depth_ - Helper function for binary_tree_depth function
 * @tree: Points to the node to measure its depth
 * @depth: Holds the binary tree depth
 */
void binary_tree_depth_(const binary_tree_t *tree, size_t *depth)
{
	if (tree == NULL)
		return;

	*depth = *depth + 1;
	binary_tree_depth_(tree->parent, depth);
}

/**
 * binary_tree_depth - Computes the depth of a node in a binary tree
 * @tree: Points to the node to measure its depth
 *
 * Return: The depth of @tree, 0 if @tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	binary_tree_depth_(tree, &depth);

	return (depth - 1);
}

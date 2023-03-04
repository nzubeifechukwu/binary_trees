#include "binary_trees.h"

/**
 * binary_tree_nodes_ - Helper function for the binary_tree_nodes function
 * @tree: Points to the root node of a binary tree
 * @nodes: Stores the number of nodes in the binary tree
 */
void binary_tree_nodes_(const binary_tree_t *tree, size_t *nodes)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL || tree->right != NULL)
		(*nodes)++;

	binary_tree_nodes_(tree->left, nodes);
	binary_tree_nodes_(tree->right, nodes);
}

/**
 * binary_tree_nodes - Counts no of nodes of binary tree with at least 1 child
 * @tree: Points to the root node of the tree
 *
 * Return: Number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	binary_tree_nodes_(tree, &nodes);

	return (nodes);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal of a binary tree
 * @tree: Points to the root node of the tree
 * @func: Points to a function to call for each node of the tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

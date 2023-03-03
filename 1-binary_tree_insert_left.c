#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Points to the node to insert the left child in
 * @value: Value to store in the new node
 *
 * Return: new node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);

	tree->n = value;
	tree->parent = parent;
	tree->right = NULL;
	tree->left = parent->left;
	if (tree->left != NULL)
		tree->left->parent = tree;
	parent->left = tree;

	return (tree);
}

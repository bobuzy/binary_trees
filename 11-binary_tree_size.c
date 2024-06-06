#include "binary_trees.h"

/**
 * binary_tree_size - Calculate the size of a binary tree
 * @tree: The node to be calcualted
 *
 * Return: The size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
	{
		return (0);
	}

	total = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (total);
}

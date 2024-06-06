#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts all nodes with at least 1 child in a binary tree
 * @tree: Tree to count the nodes from
 *
 * Return: Number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		node = 1;
	}

	return (node + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}

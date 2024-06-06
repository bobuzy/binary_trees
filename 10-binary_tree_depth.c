#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree
 * @tree: node to be measured
 *
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}

	return (0);
}

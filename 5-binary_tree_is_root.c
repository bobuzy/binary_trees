#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is the root of the tree
 * @node: The node to be checked
 *
 * Return: 1 if it is the root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}

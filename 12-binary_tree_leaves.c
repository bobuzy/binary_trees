#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaf nodes on a binary tree
 * @tree: The tree to count the nodes from
 *
 * Return: Total number of leaves on the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		leaf = 1;
	}

	return (leaf + binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}

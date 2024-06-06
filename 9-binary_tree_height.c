#include "binary_trees.h"
/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: The tree to be measured
 *
 * Return: The length of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}

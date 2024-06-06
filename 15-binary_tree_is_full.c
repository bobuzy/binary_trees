#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: The pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (!(left ^ right));
}

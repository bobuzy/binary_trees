#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree
 * @tree: The pointer to the root node
 * Return: The difference in height of the left & right child
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


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

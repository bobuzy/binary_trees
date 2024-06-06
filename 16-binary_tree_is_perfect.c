#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect
 *         0 if the tree is not perfect
 *         0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_is_full(tree) == 0)
	{
		return (0);
	}

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	return (!(left ^ right));
}

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

#include "binary_trees.h"

/**
 * binary_tree_delete - Delete all nodes on a binary tree
 * @tree: The pinter to the root of the binary tree
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: The pointer to the node
 *
 * Return: Pointer to the sibling node, NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

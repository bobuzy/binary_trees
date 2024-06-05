#include "binary_trees.h"

/**
 * binary_tree_node - Create a new node on the tree
 * @parent: The parent of the new node
 * @value: The value to point the new node to
 *
 * Return: The pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

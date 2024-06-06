#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a new node to the left child of the parent
 * @parent: The parent of the new node
 * @value: The value to point the new node to
 *
 * Return: The pointer of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(NULL, value);

	if (new == NULL)
	{
		return (NULL);
	}

	temp = NULL;

	if (parent->left != NULL)
	{
		temp = parent->left;
	}

	parent->left = new;
	new->parent = parent;
	new->left = temp;

	if (temp != NULL)
	{
		temp->parent = new;
	}

	return (new);
}

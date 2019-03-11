#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: pointer to the parent node to create
 * @value: value to insert into new node.
 * Return: returns a pointer to the new node or NULL on failure
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	if (!parent)
	{
		new->parent = NULL;
		return (new);
	}
	new->parent = parent;
	return (new);
}

#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_right - set the pointer right to a given node.
 * @parent: pointer to a node
 * @value: value to set node to.
 * Return: pointer to new node or NULL
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = NULL;
	if (!parent)
		return (NULL);
	if ((parent->n) <= value)
	{
		if (parent->right && (parent->right->n) <= value)
			node = binary_tree_insert_right(parent->right, value);
		node = binary_tree_node(parent, value);

		if (parent->right)
		{
			parent->right->parent = node;
			node->right = parent->right;
		}
		parent->right = node;

	}
	return (node);
}

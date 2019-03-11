#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_left - set the pointer left to a given node.
 * @parent: pointer to a node
 * @value: value to set node to.
 * Return: pointer to new node or NULL
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = NULL;
	if (!parent)
		return (NULL);
	if (parent->left && (parent->left->n) > value)
		node = binary_tree_insert_left(parent->left, value);
	else if ((parent->n) > value)
	{
		node = binary_tree_node(parent, value);
		if (parent->left)
		{
			parent->left->parent = node;
			node->left = parent->left;
		}
		parent->left = node;

	}
	return (node);
}

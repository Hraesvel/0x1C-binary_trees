#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if is root
 * @node: node to check
 * Return: returns a 1 if node is root and 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
}

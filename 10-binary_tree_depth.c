#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: returns the depth of the tree as a size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || tree == NULL)
		return (0);
	if (!tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}

#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: returns the leaves of the tree as a leaves_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	right_depth = left_depth = 0;
	if (!tree || tree == NULL)
		return (0);
	if (tree->left)
		left_depth = binary_tree_leaves(tree->left);
	if (tree->right)
		right_depth = binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (left_depth + right_depth + 1);
	return (left_depth + right_depth);
}

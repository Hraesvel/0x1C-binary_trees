#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - goes through using post-order traversal
 * @tree: tree to traverse through
 * @func: function to print nodes
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}

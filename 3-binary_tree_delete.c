#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if ((tree->left) == NULL && (tree->right) == NULL)
		free(tree);
	else if (tree->left)
	{
		binary_tree_delete(tree->left);
	} else if (!(tree->left) && tree->right)
	{
		binary_tree_delete(tree->right);
	}
}

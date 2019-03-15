#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node.
 * @node: node to find uncle for.
 *
 * Return: pointer to uncle or else NULL;
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p;

	p = NULL;

	if (!node || !node->parent)
		return (NULL);

	p = node->parent;

	if (!p->parent)
		return (NULL);

	if (p->parent->left && p->parent->left != p)
		return (p->parent->left);
	else if (p->parent->right && p->parent->right != p)
		return (p->parent->right);

	return (NULL);
}

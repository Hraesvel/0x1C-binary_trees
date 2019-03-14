#include "binary_trees.h"
#include <stdio.h>

int min(int a, int b)
{
	return ((a <= b) ? a : b);
}

int is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	if (tree->left)
		is_full(tree->left);
	if (tree->right)
		is_full(tree->right);
	
	return (1);
		
}
/**
 * binary_tree_is_full - check if tree is full
 * @tree: pointer to a binary tree
 *
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	else if (!tree->left && !tree->right)
		return (1);

	return (min(is_full(tree->left), is_full(tree->right)));
}
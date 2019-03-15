#include "binary_trees.h"
#include <stdio.h>

/**
 * level_match - chage if two values level_match
 * @a: left side
 * @b: right side
 * Return: Value + 1 or 0 (INT)
 */
int level_match(int a, int b)
{
	if (a == b)
		return (a + 1);
	return (0);
}


/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: binary tree to check
 *
 * Return: 1 if perfect else 0
 */
int is_perfect(binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (level_match(is_perfect(tree->left), is_perfect(tree->right)));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: binary tree to check
 *
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (is_perfect(tree->left) == is_perfect(tree->right));

	if (!tree->right && !tree->left)
		return (1);
	return (0);
}

#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * max - find the max
 * @a: left side
 * @b: right side
 *
 * Return: max as int
 */
int max(int a, int b)
{
	return ((a >= b) ? a : b);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: returns the height of the tree as a size_t
 */
int tree_height(const binary_tree_t *tree)
{
	if (!tree || tree == NULL)
		return (0);
	return (1 + max(tree_height(tree->left), tree_height(tree->right)));
}

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of tree to measure
 * Return: returns the height of the tree as a int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = right = 0;
	if (tree->left)
		left = tree_height(tree->left);

	if (tree->right)
		right = tree_height(tree->right);

	return (left - right);
}

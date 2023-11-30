#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if the binary tree is full or not.
 *
 * @tree: pointer to the root node of the tree to measure the is_full factor
 *
 * Return: 1 if the binary tree is full
 * or 0 If tree is NULL or not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	full = (tree->left && tree->right) ?
		binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right) : 0;

	return (full);
}

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree
 * or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH, rightH;

	if (!tree)
		return (0);

	leftH = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rightH = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (rightH > leftH ? rightH : leftH);
}

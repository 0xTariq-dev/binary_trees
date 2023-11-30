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

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: number of nodes
 * or 0 If tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((tree->left || tree->right) ?
		binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1 : 0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect or not.
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: 1 if the tree is perfect
 * or 0 if tree is NULL or not perfect.
 */

size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leftH, rightH;

	if (!tree)
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	return ((rightH == leftH) &&
	(binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right)) ? 1 : 0);
}

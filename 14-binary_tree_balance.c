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
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of a binary tree
 * or 0 If tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lft, rt;

	if (!tree)
		return (0);

	lft = tree->left ? (int)binary_tree_height(tree->left) : -1;
	rt = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (lft - rt);
}

#include "binary_trees.h"

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
	if (tree->left)
		lft = binary_tree_balance(tree->left);
	else
		lft = -1;
	if (tree->right)
		rt = binary_tree_balance(tree->right);
	else
		rt = -1;
	return (lft - rt);
}

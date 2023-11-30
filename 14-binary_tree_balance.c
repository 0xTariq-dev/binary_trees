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

	lft = tree->left ? binary_tree_balance(tree->left) : -1;
	rt = tree->right ? binary_tree_balance(tree->right) : -1;

	return (lft - rt);
}

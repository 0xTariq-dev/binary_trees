#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: a pointer to the node of the tree to measure the depth of.
 *
 * Return: the depth of the binary tree
 * or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? binary_tree_depth(tree->parent) + 1 : 0);
}

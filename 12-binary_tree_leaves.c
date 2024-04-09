#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_leaves - function that rturns the number of leaves in a tree
 * @tree: pointer to the tree
 * Return: returns the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right) + ((tree->left || tree->right) ? 0 : 1));
}

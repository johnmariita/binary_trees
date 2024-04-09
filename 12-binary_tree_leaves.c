#include "binary_trees.h"
#include <stdio.h>

/**
 *
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + ((tree->left || tree->right) ? 0 : 1));
	return (0);
}

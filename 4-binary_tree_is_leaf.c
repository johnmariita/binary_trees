#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if a node is a leaf
 * @node: the node to be checked
 * Return: returns 1 if it's a leaf and 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}

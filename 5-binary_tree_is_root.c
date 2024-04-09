#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is a root
 * @node: pointer to the node
 * Return: returns 0 or 1 depending on whether the node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
}

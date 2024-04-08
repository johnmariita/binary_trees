#include "binary_trees.h"

/**
 * binary_tree_depth - Function that returns the depth of a node
 * @tree: a pointer to the tree
 * Return: returns the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}

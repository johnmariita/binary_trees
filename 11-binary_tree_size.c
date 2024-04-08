#include "binary_trees.h"

/**
 * binary_tree_size - function that calculates the size of a tree
 * @tree: Pointer to the tree
 * Return: returns the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

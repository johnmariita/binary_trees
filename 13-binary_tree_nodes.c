#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns the number of nodes
 * with atleast one child
 * @tree: pointer to the tree
 * Return: returns the number of nodes with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);
	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + ((tree->left || tree->right) ? 1 : 0));
}

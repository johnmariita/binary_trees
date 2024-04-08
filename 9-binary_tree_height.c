#include "binary_trees.h"

/**
 * binary_tree_height - Function that calculates the height of a tree
 * @tree: a pointer to the tree
 * Return: returns the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int lheight = binary_tree_height(tree->left);
	int rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (tree->left ? lheight + 1 : 0);
	else
		return (tree->right ? rheight + 1 : 0);
}

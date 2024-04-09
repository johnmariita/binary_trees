#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Function that calculates the height of a tree
 * @tree: a pointer to the tree
 * Return: returns the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
		return (0);
	lheight = binary_tree_height(tree->left) + (tree->left ? 1 : 0);
	rheight = binary_tree_height(tree->right) + (tree->right ? 1 : 0);

	/*if (lheight > rheight)
		return (tree->left ? lheight + 1 : 0);
	else
		return (tree->right ? rheight + 1 : 0);*/
	return (lheight > rheight ? lheight : rheight);
}

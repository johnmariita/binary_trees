#include "binary_trees.h"

/**
 * nodes - function that returns the number of nodes
 * with atleast one child
 * @tree: pointer to the tree
 * Return: returns the number of nodes with atleast one child
 */
size_t nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	nodes(tree->left);
	nodes(tree->right);
	return (nodes(tree->left) + nodes(tree->right) + 1);
}

/**
 * height - function that calculates the height of a tree
 * @tree: pointer to the tree
 * Return: returns the height of the tree
 */

int height(binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
		return (-1);
	lheight = height(tree->left);
	rheight = height(tree->right);
	return (lheight > rheight ? lheight + 1 : rheight + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the tree
 * Return: returns 1 if tree is full and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (nodes(tree->left) == nodes(tree->right))
	{
		if (height(tree->left) == height(tree->right))
			return (1);
	}
	return (0);
}

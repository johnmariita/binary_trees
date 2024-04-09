#include "binary_trees.h"
#include <stdio.h>

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
 * binary_tree_balance - function that shows the difference
 * between the left and right subtree
 * @tree: pointer to the tree
 * Return: returns the difference(balance)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
		return (0);
	lheight = height(tree->left) + 1;
	rheight = height(tree->right) + 1;
	return (lheight - rheight);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - function that traverses a binary tree postorderly
 * @tree: pointer to the root of the tree
 * @func: function that prints the value in a node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

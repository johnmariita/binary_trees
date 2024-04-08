#include "binary_trees.h"

/**
 * binary_tree_inorder - function that traverses a binary tree inorder
 * @tree: the tree to be traversed
 * @func: a function that prints the value in node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

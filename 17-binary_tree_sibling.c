#include "binary_trees.h"

/**
 * binary_tree_sibling - function that gets the sibling of a node
 * @node: pointer to the node
 * Return: returns the address of the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	int element = 0;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	element = node->n;
	parent = node->parent;
	if (parent->left && parent->right)
	{
		if (parent->left->n == element)
			return (parent->right);
		else
			return (parent->left);
	}
	else
		return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - function that returns the uncle of a node
 * @node: pointer to the node
 * Return: returns the uncle to the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	int element = 0;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	element = node->parent->n;
	parent = node->parent->parent;
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

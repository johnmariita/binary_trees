#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert the left node
 * @parent: the parent to the node
 * @value: value to be inserted to the node
 * Return: returns the created left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left = malloc(sizeof(binary_tree_t));

	if (!left || !parent)
		return (NULL);
	left->parent = parent;
	left->n = value;
	left->left = NULL;
	left->right = NULL;
	if (parent->left)
	{
		left->left = parent->left;
		left->left->parent = left;
	}
	parent->left = left;
	return (left);
}

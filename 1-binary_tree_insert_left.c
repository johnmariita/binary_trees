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
	binary_tree_t *existed = NULL;

	if (!left || !parent)
		return (NULL);
	if (parent->left)
		existed = parent->left;
	left->parent = parent;
	left->n = value;
	parent->left = left;
	if (existed)
	{
		parent->left->left = existed;
		parent->left->left->parent = left;
	}
	return (left);
}

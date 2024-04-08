#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * to the right of a node
 * @parent: parent to the node being inserted
 * @value: the value to be assigned to the node
 * Return: returns the node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right = malloc(sizeof(binary_tree_t));
	binary_tree_t *existed = NULL;

	if (!right || !parent)
		return (NULL);
	if (parent->right)
		existed = parent->right;
	right->parent = parent;
	right->n = value;
	parent->right = right;
	if (existed)
	{
		parent->right->right = existed;
		parent->right->right->parent = right;
	}
	return (right);
}

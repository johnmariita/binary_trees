#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a node
 * @parent: The parent to the node to be created
 * @value: Value to be inserted to the node
 * Return: returns the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}

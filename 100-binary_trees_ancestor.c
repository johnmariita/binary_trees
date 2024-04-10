#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that returns the lowest
 * common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: returns the lowest common ancestor of the two nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (!first->parent)
		return ((binary_tree_t *) first);
	if (!second->parent)
		return ((binary_tree_t *) second);
	if (first == second->parent)
		return ((binary_tree_t *) first);
	if (second == first->parent)
		return ((binary_tree_t *) second);
	if (second->parent == first->parent)
		return (first->parent);
	return (binary_trees_ancestor(first->parent, second->parent));
}

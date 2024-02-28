#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first: the first node
 * @second: the second node
 * Return: the node of  the lowest common ancestor or NULL if it doesn't exist
*/

binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return (first);

	if (first->parent == second)
		return (second);

	if (second->parent == first)
		return (first);
	return (binary_trees_ancestor(first->parent, second->parent));

}

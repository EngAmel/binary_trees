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
	int depth_first, depth_second;

	binary_tree_t *var_first = (binary_tree_t *)first;
	binary_tree_t *var_second = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);

	depth_first = tree_depth(first);
	depth_second = tree_depth(second);

	while (depth_first > depth_second && var_first)
	{
		var_first = var_first->parent;
		depth_first--;
	}

	while (depth_second > depth_first && var_second)
	{
		var_second = var_second->parent;
		depth_second--;
	}

	while (var_first && var_second && var_first != var_second)
	{
		var_first = var_first->parent;
		var_second = var_second->parent;
	}
	return (var_first);
}
/**
 * tree_depth - function that measures the
 * depth of a node in a binary tree
 * @node: the root of the tree
 * Return: the depth of the node
*/
int tree_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}

#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is pointer to node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is pointer to the root node of the tree to check
 * Return: Number of the node in the tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);
	full = binary_tree_nodes_full(tree);
	if (full == 0 || full == 2)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_nodes_full - function that counts the nodes
 * with at least 1 child in a binary tree
 *
 * @tree: is pointer to the root
 * Return: Number of the node in the tree
 */

int binary_tree_nodes_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	else if (!tree->left || !tree->right)
	{
		return (1);
	}
	else
	{
		left = binary_tree_nodes_full(tree->left);
		right = binary_tree_nodes_full(tree->right);
		return (left + right);
	}
}

#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: is pointer to the root
 * Return: Number of the node in the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	else if (tree->right && tree->left)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		return (left + right);
	}

	else if (tree->right && !tree->left)
		return (binary_tree_leaves(tree->right));

	else if (tree->left && !tree->right)
		return (binary_tree_leaves(tree->left));
}

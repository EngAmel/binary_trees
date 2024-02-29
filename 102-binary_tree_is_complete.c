#include "binary_trees.h"


/**
 * binary_tree_is_complete - function that checks if
 * a binary tree is complete
 * @tree: pointer to the root of the tree
 * Return: 0 or 1 as bool
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);


	left_node = binary_tree_is_complete(tree->left);
	right_node = binary_tree_is_complete(tree->right);

	return (left_node && right_node);
}

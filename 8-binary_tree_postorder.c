#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary
 * tree using in-order traversal
 * @tree: pointer to thr root of the tree
 * @func: function to apply on each node
 * Return: nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);

	if (tree->right)
		binary_tree_postorder(tree->right, func);

	if (func)
		func(tree->n);
}

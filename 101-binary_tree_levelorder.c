#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root
 * @func: pointer to the function that got intger as paramiter
 * Return: nothing
*/


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!tree->parent)
		func(tree->n);

	if (tree->left && func)
		func(tree->left->n);
	if (tree->left && func)
		func(tree->right->n);

	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);

}

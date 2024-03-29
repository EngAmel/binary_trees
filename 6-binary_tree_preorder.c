#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through
 * a binary tree using pre-order traversal
 * @tree: pointer to thr root of the tree
 * @func: function to apply on each node
 * Return: NULL
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree)
		return;

	if (func)
		func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}

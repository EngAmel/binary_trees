#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation on a
 * binary tree
 * @tree: the node that represent the root of the tree
 * Return: poinyer to the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *last_root = tree;
	binary_tree_t *new_root = tree->left, *temp;

	if (!tree || !tree->left)
		return (tree);

	tree = new_root;
	new_root->parent = NULL;
	last_root->parent = new_root;
	temp = new_root->left;
	new_root->left = last_root;
	last_root->right = temp;
	if (temp)
		temp->parent =  last_root;
	return (new_root);
}
/*first check if the right is NULL or not and check if the root is NULL */
/*make the perant of the new root = NULL and thin*/
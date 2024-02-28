#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;
	int balance;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		balance = left - right;
		return (balance);
	}
	else
		return (0);
}

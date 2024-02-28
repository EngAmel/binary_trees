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
		left = binary_tree_height_balance(tree->left);
		right = binary_tree_height_balance(tree->right);
		balance = left - right;
		return (balance);
	}
	else
		return (0);
}
/**
 * binary_tree_height_balance - Write a function that measures
 * the height of a binary tree
 * @tree: the root of the tree
 * Return: the hight of the tree
*/
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height_balance(tree->left);
	right = binary_tree_height_balance(tree->right);
	return (max_balance(left, right) + 1);
}
/**
 * max_balance - fiunction that return the maximum value between two numbers
 * @first_number: first number
 * @secand_number: secand number
 * Return: the greatast value
*/
size_t max_balance(size_t first_number, size_t secand_number)
{
	if (first_number >= secand_number)
		return (first_number);
	else
		return (secand_number);
}

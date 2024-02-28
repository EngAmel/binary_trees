#include "binary_trees.h"


/**
 * binary_tree_height - Write a function that measures
 * the height of a binary tree
 * @tree: the root of the tree
 * Return: the hight of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	return (max(left, right));
}
/**
 * max - fiunction that return the maximum value between two numbers
 * @first_number: first number
 * @secand_number: secand number
 * Return: the greatast value
*/
size_t max(size_t first_number, size_t secand_number)
{
	if (first_number >= secand_number)
		return (first_number);
	else
		return (secand_number);
}

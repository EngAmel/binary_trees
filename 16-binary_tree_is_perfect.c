#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is  perfect
 *
 * @tree: is pointer to the root node of the tree to check
 * Return: 1 if perfict otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height_balance(tree->left);
		right = binary_tree_height_balance(tree->right);
		printf("%d", left);
		printf("%d\n", right);

		if (left == right)
		{
			if (!tree->left && !tree->right)
				return (1);
			return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
		}
		else
			return (0);

	}
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
		return (1);
	left = binary_tree_height_balance(tree->left);
	right = binary_tree_height_balance(tree->right);
	return (1 + max_balance(left, right));
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


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
	binary_tree_t **Q;
	int f = 0, r = 0;

	if (!tree  || !func)
		return;

	Q = malloc(sizeof(binary_tree_t *) * BUFSIZ);
	Q[r++] = (binary_tree_t *)tree;

	while (f < r)
	{
		binary_tree_t *current = Q[f++];

		func(current->n);

		if (current->left)
			Q[r++] = current->left;
		if (current->right)
			Q[r++] = current->right;
	}
	free(Q);
}

#include "binary_trees.h"


/**
 * binary_tree_insert_right - function that creates a binary tree node
 * @parent: pointer to previase node
 * @value: intger value that will be in the node
 * Return: pointer to the node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);
	if (!parent)
	{
		free(new_node);
		return (NULL);
	}
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->n = value;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}

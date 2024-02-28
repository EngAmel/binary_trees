#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: is pointer to node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_parent;

	if (node)
    {
        if (!node->parent)
		    return (NULL);
	    node_parent = node->parent;
	    if (!node_parent->left || !node_parent->right)
		    return (NULL);
	    else if (node_parent->left && node_parent->right)
	    {
		    if (node == node_parent->left)
			    return (node_parent->right);
		    else
			    return (node_parent->left);
	    }
    }
    return (NULL);
}

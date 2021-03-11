#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that
 * check if a node is the root
 * @node: node
 *
 * Return: boolean
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}

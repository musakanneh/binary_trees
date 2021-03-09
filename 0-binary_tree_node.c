#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: returns a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/**
	 * Check for parent value
	 * Allocate memory  for a new node and store the address
	 * in the parent pointer
	 * store the value in the parent pointer
	 * 
	 */
	if (value != 0)
	{
		return (NULL);
	}
	binary_tree_t *temp_node = NULL;
	if (!(parent))
	{
		temp_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	}
	temp_node->left = temp_node->right = NULL;
	parent = temp_node;

	return (0);
}

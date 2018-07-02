#include "binary_trees.h"
/**
 *binary_tree_node - creates a binary tree node
 *@parent: the pointer to the parent node of the node to create
 *@value: the value of the this new node
 *
 *Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->left = NULL;
	child->right = NULL;
	child->n = value;

	return (child);
}

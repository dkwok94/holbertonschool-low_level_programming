#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left child of another node
 *@parent: pointer to the parent node to insert left-child in
 *@value: the value stored in the new node
 *
 *Description: If parent already has a left child, the new node must take its
 *place and the old left child must be set as the left child of the new node
 *Return: a pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->left = NULL;
	child->right = NULL;
	child->n = value;

	if (parent->left == NULL)
		parent->left = child;
	else
	{
		child->left = parent->left;
		parent->left->parent = child;
		parent->left = child;
	}

	return (child);
}

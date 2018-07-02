#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right child of another node
 *@parent: a pointer to the node to insert the right child in
 *@value: the value contained in the new node
 *
 *Description: if the parent has a right child, the new node must take its place
 *and the old right child must be set as the right child of the new node
 *Return:
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->n = value;
	child->left = NULL;
	child->right = NULL;

	if (parent->right == NULL)
		parent->right = child;
	else
	{
		child->right = parent->right;
		parent->right->parent = child;
		parent->right = child;
	}
	return (child);
}

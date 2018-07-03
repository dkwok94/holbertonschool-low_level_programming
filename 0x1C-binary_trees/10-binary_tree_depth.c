#include "binary_trees.h"

/**
 *levelfromroot - iterates backward until the root node is found
 *@node: the current node being analyzed
 *@level: the level counter
 *
 *Return: the level from the root node to the current node
 */

size_t levelfromroot(const binary_tree_t *node, size_t level)
{
	if (node->parent == NULL)
		return (level);

	else
		return (level + levelfromroot(node->parent, 1));
}

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@node: the node to measure the depth of
 *
 *Return: the depth of the node or 0 if node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count;

	if (node == NULL || node->parent == NULL)
		return (0);

	count = levelfromroot(node->parent, 1);
	return (count);
}

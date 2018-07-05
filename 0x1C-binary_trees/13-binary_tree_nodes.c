#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child
 *@tree: a pointer to the tree to analyze
 *
 *Return: the number of nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		counter += binary_tree_nodes(tree->right);

	return (counter + 1);
}

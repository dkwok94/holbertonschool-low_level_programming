#include "binary_trees.h"
/**
 *nodecounter - counts the number of nodes with at least one child in a subtree
 *@tree: the tree to count
 *
 *Return: the number of nodes in the tree with at least one child
 */
size_t nodecounter(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		count += nodecounter(tree->left) + 1;
	if (tree->right != NULL)
		count += nodecounter(tree->right) + 1;
	return (count);
}

/**
 *binary_tree_nodes - counts the nodes with at least 1 child
 *@tree: a pointer to the tree to analyze
 *
 *Return: the number of nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		count += nodecounter(tree->left);
	if (tree->right != NULL)
		count += nodecounter(tree->right);
	return (count + 1);
}

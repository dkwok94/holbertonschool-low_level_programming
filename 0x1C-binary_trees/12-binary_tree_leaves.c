#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: a pointer to the tree to analyze
 *
 *Return: the number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftleaves = 0;
	size_t rightleaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		leftleaves = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		rightleaves = binary_tree_leaves(tree->right);

	return (leftleaves + rightleaves);
}

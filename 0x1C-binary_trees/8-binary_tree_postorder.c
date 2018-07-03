#include "binary_trees.h"
/**
 *binary_tree_postorder - goes through a binary tree with postorder traversal
 *@tree: a pointer to the tree to traverse
 *@func: a pointer to a function to call for each node
 *
 *Description: if tree or func are NULL, do nothing
 *Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}

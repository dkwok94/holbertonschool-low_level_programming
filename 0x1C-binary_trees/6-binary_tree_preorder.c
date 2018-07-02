#include "binary_trees.h"
/**
 *binary_tree_preorder - goes through a binary tree using pre-order traversal
 *@tree: the tree to traverse
 *@func: pointer to a function to call for each node
 *
 *Description: if tree or func is NULL, do nothing
 *Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	if (tree->left == NULL && tree->right == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}

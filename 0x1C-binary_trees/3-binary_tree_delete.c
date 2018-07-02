#include "binary_trees.h"
/**
 *binary_tree_delete - deletes an entire binary tree
 *@tree: a pointer to the tree to delete
 *
 *Description: if tree is NULL, do nothing
 *Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}

#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: a pointer to the tree to measure the height of
 *
 *Return: the height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight;
	size_t rightheight;

	if (tree == NULL)
		return (0);

	/*Check if tree is just a root node*/
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftheight = binary_tree_height(tree->left) + 1;
	rightheight = binary_tree_height(tree->right) + 1;

	if (leftheight > rightheight)
		return (leftheight);
	else
		return (rightheight);
}

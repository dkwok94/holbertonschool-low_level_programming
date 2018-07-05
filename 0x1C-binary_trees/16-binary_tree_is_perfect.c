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

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the binary tree
 *
 *Return: 1 if binary tree is perfect, 0 if tree is NULL or if not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

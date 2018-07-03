#include "binary_trees.h"
/**
 *subheight - finds the height of a subtree
 *@tree: a pointer to the tree to count
 *@counter: a tally of the number of levels traversed
 *
 *Return: the height of the subtree
 */

size_t subheight(const binary_tree_t *tree, size_t counter)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (counter);

	else if (tree->left != NULL)
		return (counter + subheight(tree->left, 1));

	else
		return (counter + subheight(tree->right, 1));
}

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

	/*Check if tree is just a root node*/
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftheight = subheight(tree->left, 1);
	rightheight = subheight(tree->right, 1);

	if (leftheight > rightheight)
		return (leftheight);
	else
		return (rightheight);
}

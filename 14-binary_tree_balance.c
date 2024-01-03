#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0
 */

int binary_tree_h(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_h(tree->left);
	right_h = binary_tree_h(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_h(tree->left);
	right = binary_tree_h(tree->right);

	return (left - right);
}

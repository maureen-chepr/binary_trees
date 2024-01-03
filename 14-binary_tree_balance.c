#include "binary_trees.h"

/**
 * binary_tree_h - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0
 */

size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_h(tree->left);
	right_h = binary_tree_h(tree->right);
	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_h(tree->left);
	right = binary_tree_h(tree->right);

	return ((int) (left - right));
}

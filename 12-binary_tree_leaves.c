#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l, right_l, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_l = binary_tree_leaves(tree->left);
	right_l = binary_tree_leaves(tree->right);

	total = (left_l + right_l);
	return (total);
}

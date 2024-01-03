#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: max height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = (tree->left != NULL) ? 1 + binary_tree_height(tree->left) : 0;
	right_h = (tree->right != NULL) ? 1 + binary_tree_height(tree->right) : 0;

	return (left_h > right_h ? left_h : right_h);
}

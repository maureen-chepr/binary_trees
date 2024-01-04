#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - finds height of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (right_h <= left_h)
		return (left_h + 1);

	return (right_h + 1);

}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t right_leaf, left_leaf;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (left == NULL || right == NULL)
		return (0);
	right_leaf = binary_tree_height(right);
	left_leaf = binary_tree_height(left);
	if (right_leaf == left_leaf)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);

}

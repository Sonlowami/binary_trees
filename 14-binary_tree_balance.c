#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - find the balance factor of the binary tree
 * @tree: pointer to the root of the binary tree
 *
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (left - right);
}
/**
 * tree_height - find the height of the binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: integer height of the tree.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_len, right_len, res;

	if (!tree)
		return (0);
	left_len = tree_height(tree->left);
	right_len = tree_height(tree->right);

	res = (left_len >= right_len) ? left_len + 1 : right_len + 1;
	return (res);
}

#include "binary_trees.h"
/**
 * binary_tree_height - find the height of the binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: integer height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_len, right_len, res;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_len = binary_tree_height(tree->left);
	right_len = binary_tree_height(tree->right);

	res = (left_len >= right_len) ? left_len + 1 : right_len + 1;
	return (res);
}

#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to the root of the binary tree
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 1;

	if (!tree)
		return (0);
	is_full *= binary_tree_is_full(tree->left);
	is_full *= binary_tree_is_full(tree->right);
	if (!tree->left && !tree->right)
		return (1);
	else if (tree->right && tree->left)
		return (is_full);
	return (0);
}

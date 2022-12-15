#include "binary_trees.h"

void implimentor(const binary_tree_t *tree, int level, void (*func)(int));
size_t tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder - traverse a binary tree by order
 * @tree: pointer to the root of the tree
 * @func: the function to execute for every value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree || !func)
		return;
	height = tree_height(tree);
	for (i = 0; i < height; i++)
		implimentor(tree, i, func);
}
/**
 * implimentor - execute func for every node
 * @tree: pointer to the root of the tree/subtree
 * @level: the current level
 * @func:the function to execute
 */
void implimentor(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 0)
		func(tree->n);
	else
	{
		implimentor(tree->left, level - 1, func);
		implimentor(tree->right, level - 1, func);
	}
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

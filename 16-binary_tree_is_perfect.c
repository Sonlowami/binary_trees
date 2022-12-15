#include "binary_trees.h"

size_t tree_size(const binary_tree_t *tree);
size_t tree_height(const binary_tree_t *tree);
int power(int base, int exp);
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height;
	double perfect_size;

	if (!tree)
		return (0);
	size = tree_size(tree);
	height = tree_height(tree);
	perfect_size = power(2, height) - 1;
	if (size == perfect_size)
		return (1);
	return (0);
}
/**
 * tree_size - find the size of a binary tree
 * @tree: pointer to the root of the tree to be measured
 *
 * Return: unsigned integer for the size of the tree
 */
size_t tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += tree_size(tree->left) + 1;
	size += tree_size(tree->right);
	return (size);
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
/**
 * power - raise a number to a power of base
 * @base: the base number
 * @exp: the exponent
 *
 * Return: the resulting number
 */
int power(int base, int exp)
{
	int i = 1, res;

	for (res = base; i < exp; i++)
		res *= base;
	return (res);
}

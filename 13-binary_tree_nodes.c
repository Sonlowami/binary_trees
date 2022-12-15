#include "binary_trees.h"
/**
 * binary_tree_nodes - count the number of parents in the tree
 * @tree: pointer to the root of the tree
 *
 * Return: unsigned integer for the number of nodes calculated
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		nodes++;
	return (nodes);
}

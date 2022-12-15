#include "binary_trees.h"
/**
 * binary_tree_depth - find the depth of a node in the tree
 * @tree: pointer to the node to measure whose depth
 *
 * Return: the depth from root to tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);
	depth = 0;
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

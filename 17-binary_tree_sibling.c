#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of the given node
 * @node: pointer to the node to find sibling for
 *
 * Return: pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par;

	if (!node || !node->parent)
		return (NULL);
	par = node->parent;
	return ((node == par->left) ? par->right : par->left);
}

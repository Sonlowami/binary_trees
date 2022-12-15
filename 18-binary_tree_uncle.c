#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to node to find uncle for
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *par, *g_par;

	if (!node || !node->parent)
		return (NULL);
	par = node->parent;
	g_par = par->parent;
	if (!g_par)
		return (NULL);
	return ((par == g_par->left) ? g_par->right : g_par->left);
}

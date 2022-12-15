#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse a binary treein post-order
 * @tree: the tree to traverse in postorder
 * @func: the function to execute for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

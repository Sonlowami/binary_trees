#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse a binary treein pre-order
 * @tree: the tree to traverse in preorder
 * @func: the function to execute for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse a binary treein in-order
 * @tree: the tree to traverse in inorder
 * @func: the function to execute for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

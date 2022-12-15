#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node at the left
 * @parent: the parent node
 * @value: the value of the new node
 *
 * Description: This program insers to the left of a parent
 *		node. If there is something there. The new
 *		node replaces it.
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}

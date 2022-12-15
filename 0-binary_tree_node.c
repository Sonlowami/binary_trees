#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent of the created node
 * @value: value of the created node
 *
 * Description:The function allocates memory to a node
 *		and add it to an appropriate spot to the parent.
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->left = new->right = NULL;
	new->n = value;
	if (parent)
	{
		if (value < parent->n)
			parent->left = new;
		else if (value > parent->n)
			parent->right = new;
	}
	return (new);
}

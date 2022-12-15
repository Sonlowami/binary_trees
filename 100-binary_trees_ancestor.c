#include "binary_trees.h"
/**
 * binary_trees_ancestor - find the ancestor between two nodes
 * @first: the first node
 * @second: the second node
 *
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
		binary_tree_t *array[256];
		int i, j;

		if (!first || !second)
			return (NULL);
		for (i = 0; first; first = first->parent, i++)
			array[i] = (binary_tree_t *)first;
		while (second)
		{
			for (j = 0; j < i; j++)
				if (second == array[j])
					return (array[j]);
			second = second->parent;
		}
		return (NULL);
}

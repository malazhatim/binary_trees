#include "binary_trees.h"
/**
 * binary_trees_ancestor - find the low common an ancestor
 * @first: node
 * @second:node
 * Return: pointer or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tree;

	if (!first || !second)
		return (NULL);
	tree = (binary_tree_t *)second;
	while (first != NULL)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tree;
		first = first->parent;
	}
	return (NULL);
}

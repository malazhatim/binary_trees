#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: root node of the tree
 * @value: the value in the root note
 * Return: binary tree or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t  *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);
	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->right = NULL;
	new_tree->left = NULL;
	return (new_tree);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert in the right child of tree
 * @parent: tree node
 * @value: value to insert
 * Return: new node or NULL on fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
		return (NULL);

	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		parent->right->parent = n_node;
	}
	parent->right = n_node;

	return (n_node);
}

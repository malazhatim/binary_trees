#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	else
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
}

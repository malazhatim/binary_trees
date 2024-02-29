#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the size leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	else
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}

#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

/**
 * binary_tree_height - measures the hight of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_right <= h_left)
		return (h_left + 1);

	return (h_right + 1);

}

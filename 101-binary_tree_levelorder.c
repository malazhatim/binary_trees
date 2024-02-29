#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: node
 * @func: function to call
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *list[1024];
	binary_tree_t *t;
	int a = 0, b = 0;

	if (tree == NULL || func == NULL)
		return;
	for (a = 0; a < 1024; a++)
		list[a] = NULL;
	list[0] = (binary_tree_t *)tree;
	a = 0;
	while (list[a] != NULL)
	{
		t = list[a];
		func(t->n);
		if (t->left != NULL)
		{
			b++;
			list[b] = t->left;
		}
		if (t->right != NULL)
		{
			b++;
			list[b] = t->right;
		}
		a++;
	}
}

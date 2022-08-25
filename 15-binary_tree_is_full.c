#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a BT is full
 * @tree: pointer to the tree to be checked
 * Return: 0 if no tree or tree is null
 * else 1 if full(each parent has 2 or no childeren)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	return (0);
}

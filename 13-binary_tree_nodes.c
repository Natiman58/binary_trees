#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: num of nodes with at least one child(N)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t N = 0;

	if (!tree || tree == NULL)
		return (0);
	if (!tree->right && !tree->right)
		return (0);

	N += (tree->left || tree->right) ? 1 : 0;
	N += binary_tree_nodes(tree->left);
	N += binary_tree_nodes(tree->right);

	return (N);
}

#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: num of nodes with at least one child(N)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t N;

	if (!tree || tree == NULL)
		return (0);
	if (!tree->right && !tree->right)
		return (0);
	N = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (N);
}

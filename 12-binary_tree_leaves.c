#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves in a tree
 * @tree: pointer to the tree
 * Return: number of leaves
 * if tree is null return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_lvs;

	if (!tree || tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	num_lvs = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

	return (num_lvs);

}

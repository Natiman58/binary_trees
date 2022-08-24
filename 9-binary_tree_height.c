#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the tree to be measured
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len_left, len_right;

	if (tree == NULL)
		return (0);

	len_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	len_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (len_left > len_right)
		return (len_left);

	return(len_right);
}


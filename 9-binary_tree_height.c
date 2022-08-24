#include "binary_trees.h"
/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: pointer to the tree to be measured
 * Return: max length
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len_left, len_right;

	if (tree == NULL)
		return (0);

	len_left = tree->left ? (binary_tree_height(tree->left) + 1) : 0;
	len_right = tree->right ? (binary_tree_height(tree->right) + 1): 0;

	if (len_left > len_right)
		return (len_left);
	return (len_right);
}


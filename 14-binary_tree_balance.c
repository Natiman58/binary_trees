#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balace factor(k)
 * @tree: pointer to the tree
 * Return: NULL if no tree or tree is null
 * else return the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int k;

	if (!tree || tree == NULL)
		return (0);

	k = (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (k);
}

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

	len_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	len_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	if (len_left > len_right)
		return (len_left);
	return (len_right);
}

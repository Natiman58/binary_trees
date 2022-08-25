#include "binary_trees.h"
/**
 * binary_tree_levelorder - traverses using level order
 * @tree: pointer to the root of the tree
 * @func: function to be called for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t current_lvl, max_lvl;

	if (!tree || !func)
		return;

	max_lvl = binary_tree_height(tree) + 1;

	for (current_lvl = 1; current_lvl <= max_lvl; current_lvl++)
		binary_tree_postorder_plus(tree, func, current_lvl);
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

	len_left = tree->left ? (binary_tree_height(tree->left) + 1) : 0;
	len_right = tree->right ? (binary_tree_height(tree->right) + 1) : 0;

	if (len_left > len_right)
		return (len_left);
	return (len_right);
}
/**
 * binary_tree_postorder_plus - postorder with level
 * @tree: pointer to the root of the tree
 * @func: function to be called for each node
 * @level: level of the node in the tree
 */
void binary_tree_postorder_plus(
		const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL || func == NULL)
		return;
	if (level == 1)
		func(tree->n);
	binary_tree_postorder_plus(tree->left, func, level - 1);
	binary_tree_postorder_plus(tree->right, func, level - 1);
}

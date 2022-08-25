#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a BT is perfect
 * @pointer to the root node of the tree
 * @tree: pointer to the root of the tree
 * Return: 1 if perfect, if not 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || tree == NULL)
		return (0);
	size_t height;
	size_t num_nodes;
	size_t expo;

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	num_nodes = binary_tree_size(tree);
	expo = (size_t)x_pow_of_y(2, height + 1);
	return (expo - 1 == num_nodes);
}
/**
 * x_pow_of_y - returns x raised to y recursively
 * @x: lower num
 * @y: power num
 * Return: result
 */
int x_pow_of_y(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result = x * x_pow_of_y(x, y - 1);

	return (result);
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
 * binary_tree_size - determines the size of the binary tree
 * @tree: pointer to the tree
 * Return: size of the tree
 * and 0 is no tree or tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree || tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (size);
}


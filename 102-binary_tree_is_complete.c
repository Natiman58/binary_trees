#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root of the tree
 * Return: 1 if complete, if not 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);

	return (check(tree, 0, size));
}

/**
 * binary_tree_size - determines the size of the binary tree
 * @tree: pointer to the root node of a tree
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

/**
 * check - checks if the tree is complete
 * @tree: pointer to the root of the tree
 * @idx: index of the node to check
 * @size: size of the tree
 * Return: 1 if complete, 0 if not or tree is null
 */
int check(const binary_tree_t *tree, size_t idx, size_t size)
{
	int result;

	if (!tree)
		return (1);
	if (idx >= size)
		return (0);
	result = check(tree->left, 2 * idx + 1, size) && check(
			tree->right, 2 * idx + 2, size);
	return (result);
}

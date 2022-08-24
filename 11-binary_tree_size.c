#include "binary_trees.h"
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

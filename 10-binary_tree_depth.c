#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the debth of a binary tree
 * @tree: pointer to the tree to be evaluated for debth
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

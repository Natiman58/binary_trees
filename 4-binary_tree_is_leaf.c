#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node  to be checked
 * Return: 1 if node is leaf, if not 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right != NULL || node->left != NULL || node == NULL)
		return (0);
	return (1);
}

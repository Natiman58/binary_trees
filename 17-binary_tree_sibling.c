#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the sibling node
 * Return: NUll if -node is null -parent is null -node has no sibling
 * else return pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right)
	{	ptr = node->parent->left;
		return (ptr);
	}
	ptr = node->parent->right;
	return (ptr);
}

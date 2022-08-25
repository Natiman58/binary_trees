#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_uncle - finds uncle of the node
 * @node: pointer to the root node
 * Return: pointer to the uncle node
 * NULL if node is null or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ptr;

	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right || node->parent->left)
	{
		ptr = binary_tree_sibling(node->parent);
		return (ptr);
	}
	return (NULL);
}

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

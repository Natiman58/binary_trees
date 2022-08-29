#include "binary_trees.h"
/**
 * bst_search - searches for a value in a BST
 * @tree: pointer to the root of the tree
 * @value: the value to search in the tree
 * Return: pointer to the node containing the value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *ptr = (bst_t *)tree;

	if (!tree || tree == NULL)
		return (NULL);
	while (ptr)
	{
		if (value == ptr->n)
			return (ptr);
		else if (value < ptr->n)
			ptr = ptr->left;
		else if (value > ptr->n)
			ptr = ptr->right;
	}

	return (NULL);
}

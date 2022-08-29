#include "binary_trees.h"
/**
 * bst_remove - removes a node from a BST
 * @root: pointer to the root node the tree
 * @value: the value to remove in the tree
 * Return: pointer to the new root node
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *ptr = NULL;

	if (!root)
		return (NULL);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			ptr = root->right;
			free(root);
			return (ptr);
		}
		else if (!root->right)
		{
			ptr = root->left;
			free(root);
			return (ptr);
		}
		ptr = inorder_successor(root->right);
		root->n = ptr->n;
		root->right = bst_remove(root->right, ptr->n);
	}
	return (root);
}

/**
 * inorder_successor - finds the smallest value in the tree
 * @root: pointer to the root node of the tree
 * Return: the least minimum value in the BST
 */
bst_t *inorder_successor(bst_t *root)
{
	while (root->left)
		root = root->left;
	return (root);
}

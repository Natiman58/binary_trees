#include "binary_trees.h"

/**
 * binary_tree_is_bst- checks if a BT is valid BST
 * @tree: pointer to the root node of the tree
 * Return: 1 if tree is valid, if not 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_BST(tree, INT_MIN, INT_MAX));
}

/**
 * check_BST - compares the value of node to the the min and max
 * @min: minimum value in the tree
 * @max: maximum value in the tree
 * Return: 1 if tree is valid BST, else 0.
 */
int check_BST(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	return (check_BST(tree->left, min, tree->n - 1) &&
			check_BST(tree->right, tree->n + 1, max));

}


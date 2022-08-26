#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotates the tree to the left
 * @tree: pointer to the root of the tree
 * Return: pointer to the new root node of the tree after rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *ptr_r, *ptr_p;

	if (!tree || !tree->right)
		return (NULL);

	ptr_r = tree;
	ptr_p = tree->parent;

	tree = tree->right;
	tree->parent = NULL;

	if (tree->left)
	{
		ptr_r->right = tree->left;
		tree->left->parent = ptr_r;
	}
	else
		ptr_r->right = NULL;

	ptr_r->parent = tree;
	tree->left = ptr_r;

	if (ptr_p)
		ptr_p->right = tree;
	tree->parent = ptr_p;

	return (tree);
}


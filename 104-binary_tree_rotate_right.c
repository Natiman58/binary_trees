#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotates a tree to the right
 * @tree: pointer to the root node of the tree
 * Return: pointer to the rotated new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *ptr_r, *ptr_p;

	if (!tree || !tree->left)
		return (NULL);

	ptr_r = tree;
	ptr_p = tree->parent;

	tree = tree->left;
	tree->parent = NULL;

	if (tree->right)
	{
		ptr_r->left = tree->right;
		tree->right->parent = ptr_r;
	}
	else
		ptr_r->left = NULL;
	ptr_r->parent = tree;
	tree->right = ptr_r;

	if (ptr_p)
		ptr_p->left = tree;
	tree->parent = ptr_p;

	return (tree);
}

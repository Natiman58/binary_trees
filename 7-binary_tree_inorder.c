#include "binary_trees.h"
/**
 * binary_tree_inorder - uses in-order traversal
 * @tree: the pointer to the tree to be traversed
 * @func: pointer to function to call for each node
 * and takes value of the node as a parameter
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

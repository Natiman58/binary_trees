#include "binary_trees.h"
/**
 * binary_tree_preorder - uses pre-order traversal
 * @tree: pointer to the tree to be traversed
 * @func: pointer to a function to call for each node
 * and takes the value of the node as a parameter
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

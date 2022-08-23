#include"binary_trees.h"
/**
 * binary_tree_postorder - uses post order tree traversal
 * @tree: pointer to the tree to be traversed
 * @func: the function to be called for each node
 * and takes node value as a parameter
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

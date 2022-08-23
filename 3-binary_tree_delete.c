#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}

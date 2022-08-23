#include "binary_trees.h"
/**
 * binary_tree_insert_right-inserts a node on the right of
 * anothe node
 * @parent: pointer to the parent or old node
 * @value: value of the new node
 * Return: pointer to the new node on success
 * and NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	binary_tree_t *new_Node = malloc(sizeof(binary_tree_t));

	if (!new_Node)
		return (NULL);

	new_Node->n = value;
	new_Node->parent = parent;
	new_Node->right = parent->right;
	new_Node->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = new_Node;
	}
	parent->right = new_Node;
	return (new_Node);
}

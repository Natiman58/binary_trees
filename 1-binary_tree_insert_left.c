#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node on the left child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the new node on success
 * if not NULL or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node;

	if (parent == NULL)
		return (NULL);

	new_Node = binary_tree_node(parent, value);
	if (new_Node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_Node->left = parent->left;
		parent->left->parent = new_Node;
	}
	parent->left = new_Node;

	return (new_Node);
}


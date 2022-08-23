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
	/*initialize the new node*/
	binary_tree_t *new_Node;

	/*if no parent or parent is null; return NULL*/
	if (parent == NULL || !parent)
		return (NULL);

	/*create new node using the first function(task 0)*/
	new_Node = binary_tree_node(parent, value);
	if (new_Node == NULL || !new_Node)
		return (NULL);

	/*if the old parent has a left child*/
	/*set the left child of the new node to that of the old*/
	/*and replace the parent of the old left child with new_Node*/
	if (parent->left != NULL)
	{
		new_Node->left = parent->left;
		parent->left->parent = new_Node;
	}
	/*if the old parent doesnt have left child*/
	/*new node is the left child of the old parent*/
	parent->left = new_Node;

	return (new_Node);
}


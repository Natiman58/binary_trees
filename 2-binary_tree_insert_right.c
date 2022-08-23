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
	/*declare new node struct*/
	binary_tree_t *new_Node;

	if (!parent || parent == NULL)
		return (NULL);
	/*create new node*/
	new_Node = binary_tree_node(parent, value);

	if (!new_Node || new_Node == NULL)
		return (NULL);

	/*if the old parent has a right node*/
	/*set the right child of the new node to that of the parent's*/
	/*then replace the parent of the old right child with new node*/
	if (parent->right != NULL)
	{
		new_Node->right = parent->right;
		parent->right->parent = new_Node;
	}
	/*if the old parent doesnt have any right child*/
	/*set the new node as the right child of the old parent*/
	parent->right = new_Node;

	return (new_Node);
}

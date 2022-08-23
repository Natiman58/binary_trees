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
	/*if no parent(old) node or parent is null; return null*/
	if (!parent || parent == NULL)
		return (NULL);

	/*else allocate memory for the new node*/
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	/*if no new node or new node is null; return null*/
	if (!newNode || newNode == NULL)
		return (NULL);
	/*create new node using the old parent node*/
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = parent->left;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
	}
	/*otherwise the old node's left child becomes the new node*/
	parent->left = newNode;
	return (newNode);
}


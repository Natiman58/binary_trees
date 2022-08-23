#include"binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node on the left child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the new node on success
 * if not NULL or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (!parent || parent == NULL)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (!newNode || newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = parent->left;
	newNode->right = NULL;

	if(newNode->left)
		newNode->left->parent = newNode;
	return (newNode);
}

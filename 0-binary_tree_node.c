#include "binary_trees.h"

/**
 * binary_tree_node - creats a binary tree
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*allocate memory for tempnode structure*/
	binary_tree_t *tempNode = malloc(sizeof(binary_tree_t));

	/*if the tempnode is null or doesnt exist; return*/
	if (!tempNode || tempNode == NULL)
		return (NULL);

	/*else create the new tempNode*/
	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}


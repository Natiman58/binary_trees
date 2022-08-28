#include"binary_trees.h"
/**
 * bst_insert - inserts a value in a BST
 * @tree: double pointer to the root of the BST
 * @value: value to be inserted in the node.
 * Return: pointer to the new node
 * or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *ptr1, *ptr2, *ptr3;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	ptr1 = *tree;
	while (ptr1)
	{
		ptr2 = ptr1;
		if (value < ptr1->n)
			ptr1 = ptr1->left;
		else if (value > ptr1->n)
			ptr1 = ptr1->right;
		else if (value == ptr1->n)
			return (NULL);
	}

	ptr3 = binary_tree_node(NULL, value);
	if (ptr2 == NULL)
		ptr2 = ptr3;
	else if (value < ptr2->n)
	{
		ptr2->left = ptr3;
		ptr3->parent = ptr2;
	}
	else
	{
		ptr2->right = ptr3;
		ptr3->parent = ptr2;
	}

	return (ptr3);
}

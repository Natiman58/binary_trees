#include "binary_trees.h"
/**
 * array_to_bst - builds a BT from an array.
 * @array: pointer tot the fist element in the array
 * @size: number of elements in the array
 * Return: pointer to the root node of the created BST
 * Or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *ptr = NULL;

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&ptr, array[i]);
	return (ptr);
}

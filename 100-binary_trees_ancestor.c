#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of 2 nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the common ancestor
 * else NULL if no common ancestor
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ptr1, *ptr2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	ptr1 = first->parent;
	ptr2 = second->parent;

	if (first == ptr2 || !ptr1 || (!ptr1->parent && ptr2))
		return (binary_trees_ancestor(first, ptr2));

	else if (second == ptr1 || !ptr2 || (!ptr2->parent && ptr1))
		return (binary_trees_ancestor(second, ptr1));

	return (binary_trees_ancestor(ptr1, ptr2));
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a right-child node.
 * @parent: Pointer to the parent node.
 * @value: Value for the new node.
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL.
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	int tempVal;

	if (parent == NULL)
		return (NULL);

	if (!parent->right)
	{
		newNode = binary_tree_node(parent, value);
		parent->right = newNode;
		return (newNode);
	}

	newNode = binary_tree_node(parent->right, value);
	parent->right->right = newNode;

	tempVal = parent->right->right->n;
	parent->right->right->n = parent->right->n;
	parent->right->n = tempVal;

	return (newNode);
}

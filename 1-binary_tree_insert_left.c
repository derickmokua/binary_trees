#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a left-child node.
 * @parent: Pointer to the parent node.
 * @value: Value for the new node.
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL.
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	int tempVal;

	if (parent == NULL)
		return (NULL);

	if (!parent->left)
	{
		newNode = binary_tree_node(parent, value);
		parent->left = newNode;
		return (newNode);
	}

	newNode = binary_tree_node(parent->left, value);
	parent->left->left = newNode;

	tempVal = parent->left->left->n;
	parent->left->left->n = parent->left->n;
	parent->left->n = tempVal;

	return (newNode);
}

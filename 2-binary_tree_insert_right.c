#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *
 * @parent: A pointer to the node where the right child is to be inserted
 * @value: The value to store in the new node
 *
 * Description:
 * If the specified parent already has a right child, the new node takes its
 * place, and the old right child becomes the right child of the new node.
 *
 * Return:
 * A pointer to the newly created node, or
 * NULL on failure or
 * if the parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}

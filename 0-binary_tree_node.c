#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Description: When created, a node does not have any child.
 * Function must return a pointer to the new node, or NULL on failure.
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /* Declare a new node of type binary_tree_t */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    /* Check if memory allocation failed */
    if (!new_node)
        return NULL;

    /* Assign the parent and value to the new node */
    new_node->n = value;
    new_node->parent = parent;

    /* Set the left and right pointers of the new node to NULL */
    new_node->left = NULL;
    new_node->right = NULL;

    /* Return a pointer to the newly created node */
    return new_node;
}


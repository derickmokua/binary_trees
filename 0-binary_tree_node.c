#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Declare a new node with its data type
    binary_tree_t *newNode;

    // Allocate memory space for the new node
    newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    // Check for memory allocation failure
    if (newNode == NULL)
    {
        return (NULL);
    }

    // Assign values to the properties of the node
    newNode->parent = parent;
    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;

    // Return a pointer to the newly created node
    return (newNode);
}


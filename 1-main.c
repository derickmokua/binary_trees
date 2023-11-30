#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    // Create a binary tree with a root node having the value 98
    binary_tree_t *root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    // Print the original binary tree
    binary_tree_print(root);
    printf("\n");

    // Insert a left child with value 128 to the right subtree
    binary_tree_insert_left(root->right, 128);

    // Insert a left child with value 54 to the root
    binary_tree_insert_left(root, 54);

    // Print the updated binary tree
    binary_tree_print(root);

    // Return 0 indicating success
    return (0);
}

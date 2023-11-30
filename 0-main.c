#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    // Create a root node with a value of 98
    binary_tree_t *root = binary_tree_node(NULL, 98);

    // Add left child nodes with values 12, 6, and 16
    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    // Add right child nodes with values 402, 256, and 512
    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    // Print the binary tree
    binary_tree_print(root);

    // Return 0 indicating success
    return (0);
}


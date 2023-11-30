```c
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 if not, 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = 0;
    size_t nodes = 0;
    size_t power = 0;

    // Check if the tree is NULL or a single node.
    if (!tree)
        return (0);

    if (!tree->right && !tree->left)
        return (1);

    // Calculate the height and total nodes in the tree.
    height = binary_tree_height(tree);
    nodes = binary_tree_size(tree);

    // Check if the tree is perfect using the formula 2^(height + 1) - 1.
    power = (size_t)_pow_recursion(2, height + 1);
    return (power - 1 == nodes);
}

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The value to exponentiate.
 * @y: The power to raise x to.
 *
 * Return: x to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
    // Handle negative power or base case.
    if (y < 0)
        return (-1);
    if (y == 0)
        return (1);
    else
        return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Tree to measure the size of.
 *
 * Return: Size of the tree, 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    // Base case: return 0 if the tree is NULL.
    if (!tree)
        return (0);

    // Recursively calculate the size of the tree.
    return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Tree to measure the height of.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_l = 0;
    size_t height_r = 0;

    // Base case: return 0 if the tree is NULL.
    if (!tree)
        return (0);

    // Calculate the height of the left and right subtrees.
    height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    // Return the maximum height between left and right subtrees.
    return (height_l > height_r ? height_l : height_r);
}

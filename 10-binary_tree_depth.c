#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: Node to calculate the depth of
 *
 * Return:
 * Depth of the node
 * 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    // Check if the input tree is NULL
    if (!tree)
        return (0);

    // Traverse up the tree until reaching the root
    while (tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    // Return the calculated depth
    return (depth);
}


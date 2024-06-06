#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The size of the binary tree. If tree is NULL, return 0.
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size + 1);
}
 

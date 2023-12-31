#include "binary_trees.h"

/**
 * binary_tree_is_heap - Checks if a binary tree is a valid Max Binary Heap
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return:
 * 1 if tree is a valid Max Binary Heap
 * 0 if tree is NULL or not a valid Max Binary Heap
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (btih_helper(tree));
}

/**
 * btih_helper - Checks if a binary tree is a valid Max Binary Heap
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return:
 * 1 if tree is a valid Max Binary Heap
 * 0 if tree is NULL or not a valid Max Binary Heap
 */
int btih_helper(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!binary_tree_is_complete(tree))
		return (0);

	if (tree->left && tree->left->n > tree->n)
		return (0);

	if (tree->right && tree->right->n > tree->n)
		return (0);

	return (btih_helper(tree->left) && btih_helper(tree->right));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 *
 * @tree: A pointer to the root node of the tree to check
 *
 * Return:
 * 1 if the tree is complete
 * 0 if the tree is not complete or NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - Checks if a binary tree is complete
 *
 * @tree: A pointer to the root node of the tree to check
 * @index: Node index to check
 * @size: Number of nodes in the tree
 *
 * Return:
 * 1 if the tree is complete
 * 0 if the tree is not complete or NULL
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Tree to measure the size of
 *
 * Return:
 * Size of the tree
 * 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}


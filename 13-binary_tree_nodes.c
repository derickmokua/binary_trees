#include "binary_trees.h"
/**
 * binary_tree_nodes - Measures the number of nodes with at least one child in a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The number of nodes with at least one child in the binary tree. If tree is NULL, return 0.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int lNodes, rNodes;

	if (tree == NULL)
		return (0);

	lNodes = binary_tree_nodes(tree->left);
	rNodes = binary_tree_nodes(tree->right);

	return (lNodes + rNodes + (tree->left || tree->right));
}

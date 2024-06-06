#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The height of the binary tree. If tree is NULL, return 0.
 **/
{
	int lDepth = 0, rDepth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lDepth = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rDepth = binary_tree_height(tree->right) + 1;

	return (lDepth > rDepth ? lDepth : rDepth);
}	

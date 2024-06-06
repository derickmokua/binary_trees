#include "binary_trees.h"

/**
 * binary_tree_height_b - Calculates the height of a binary tree intended for a balanced tree
 * @tree: tree to be traversed
 *
 * Return: height of the tree=
 */
int getHeight(const binary_tree_t *tree)
{
	int lDepth, rDepth;

	if (tree == NULL)
		return (0);

	lDepth = getHeight(tree->left);
	rDepth = getHeight(tree->right);

	return ((lDepth > rDepth) ? (lDepth + 1) : (rDepth + 1));
}
/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: tree to be traversed
 *
 * Return: balance factor of the tree
 */

int getHeight(const binary_tree_t *tree)
{
	int lDepth, rDepth;

	if (tree == NULL)
		return (0);

	lDepth = getHeight(tree->left);
	rDepth = getHeight(tree->right);

	return ((lDepth > rDepth) ? (lDepth + 1) : (rDepth + 1));
}

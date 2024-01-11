#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: balance factor.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_cnt = -1, right_cnt = -1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_cnt = binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_cnt = binary_tree_height(tree->right);

	return (left_cnt - right_cnt);
}


#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure.
 *
 * Return: the size of tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);

	return (right);
}
